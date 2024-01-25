// See https://aka.ms/new-console-template for more information

using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using OpenXLSX.OpenXLSX;

/// <summary>
/// this is union 
/// </summary>
[StructLayout(LayoutKind.Explicit)]
public unsafe struct OpenXLSXCellData
{
    [FieldOffset(0)] public int ValueType;
    [FieldOffset(4)] public bool boolV;
    [FieldOffset(4)] public double floatV;
    [FieldOffset(4)] public long IntV;
    [FieldOffset(4)] public void* PU8Str;
}

[StructLayout(LayoutKind.Explicit)]
public struct RowPosInfo
{
    [FieldOffset(0)] public int BeginIndex;
    [FieldOffset(4)] public int RowCellCount;
}

public class SheetData
{
    private OpenXLSXCellData[] _arrCellsData = null;
    private RowPosInfo[] _arrRowPosInfos = null;
    private Dictionary<IntPtr, string> _dicAllStrs = new();
    public int RowCount => _arrRowPosInfos.Length;


    public SheetData(ulong rowInfoCount, IntPtr rowInfos, ulong cellCount, IntPtr cellsData)
    {
        //Console.WriteLine($"rowInfoCount {rowInfoCount} cellCount{cellCount}");
        var sw = new Stopwatch();
        sw.Start();
        _arrRowPosInfos = new RowPosInfo[(int)rowInfoCount];
        //Console.WriteLine($" new RowPosInfo[] cost {sw.ElapsedTicks}   ticks");
        //sw.Restart();
        _arrCellsData = new OpenXLSXCellData[(int)cellCount];
        //Console.WriteLine($" new OpenXLSXCellData[] cost {sw.ElapsedTicks}   ticks");


        _dicAllStrs.EnsureCapacity((int)rowInfoCount);

        //sw.Restart();
        unsafe
        {
            //Console.WriteLine($" unsafe scope cost {sw.ElapsedTicks}   ticks");
            //sw.Restart();
            fixed (OpenXLSXCellData* pCell = _arrCellsData)
            {
                //Console.WriteLine($" fixed (OpenXLSXCellData* pCell cost {sw.ElapsedTicks}   ticks");
                //sw.Restart();
                fixed (RowPosInfo* pRowsInfo = _arrRowPosInfos)
                {
                    //Console.WriteLine($"fixed (RowPosInfo* pRowsInfo cost {sw.ElapsedTicks}   ticks");
                    //sw.Restart();
                    Unsafe.CopyBlock(pCell, cellsData.ToPointer(), (uint)cellCount * (uint)sizeof(OpenXLSXCellData));
                    //Console.WriteLine($"copy cell data cost {sw.ElapsedTicks}   ticks");
                    //sw.Restart();
                    Unsafe.CopyBlock(pRowsInfo, rowInfos.ToPointer(), (uint)rowInfoCount * (uint)sizeof(RowPosInfo));
                    //Console.WriteLine($"copy rowInfo  cost {sw.ElapsedTicks}   ticks");
                }
            }

            //sw.Restart();
            foreach (var cellData in _arrCellsData)
            {
                if (cellData.ValueType == 5) // XLValueType::String
                {
                    //_dicAllStrs.Add((IntPtr)cellData.PU8Str, Marshal.PtrToStringUTF8(new IntPtr(cellData.PU8Str)) ?? "");
                    var str = Marshal.PtrToStringUni(new IntPtr(cellData.PU8Str)) ?? "";
                    Console.WriteLine(str);
                    _dicAllStrs.Add((IntPtr)cellData.PU8Str, str);
                }
            }

            Console.WriteLine($"convertU8Str _dicAllStrs {_dicAllStrs.Count} cost {sw.ElapsedTicks}   ticks");
        }


        int a = 0;
    }

    public RowPosInfo GetRowCellPosInfo(int rowNum)
    {
        rowNum -= 1;
        var rowIndex = rowNum - 1;
        if (rowIndex >= _arrRowPosInfos.Length || rowIndex < 0)
        {
            throw new Exception($"rowIndex 越界 rowCount = {RowCount} rowIndex:{rowIndex}");
        }

        return _arrRowPosInfos[rowIndex];
    }

    public OpenXLSXCellData GetCell(int rowNum, int colNum)
    {
        RowPosInfo rowPosInfo = GetRowCellPosInfo(rowNum);
        var colIndex = colNum - 1;
        var rowLen = rowPosInfo.RowCellCount;
        if (colIndex < 0 || colIndex >= rowLen)
        {
            throw new ArgumentOutOfRangeException($"colIndex:{colIndex} rowLen:{rowLen}");
        }

        var realIndex = rowPosInfo.BeginIndex + colIndex;
        return _arrCellsData[realIndex];
    }
}


class Program
{
    static void Main()
    {
        unsafe
        {
            var sizeOfIntPtr = sizeof(IntPtr);
            var sizeOfPointer = sizeof(void*);
            var sizeLong = sizeof(long);
            var sizeBool = sizeof(bool);
            var sizeSampleUnion = sizeof(OpenXLSXCellData);
            //Console.WriteLine($"sizeOfIntPtr{sizeOfIntPtr}\nsizeOfPointer {sizeOfPointer}\nsizeLong{sizeLong}\nsizeSampleUnion {sizeSampleUnion}\nsizeBool{sizeBool}");
        }

        // return;
        var sw = new Stopwatch();
        using XLDocument doc = new XLDocument();
        sw.Start();
        doc.Open("G:\\temp\\test1.xlsx");
        using var wk = doc.Workbook;
        using var sheet = wk.Worksheet("testSheet");
        SheetData sheetData = null;
#if true
        sheet.IterateAllCells((count, infos, totalCount, data) =>
        {
            var swBuildCSData = new Stopwatch();
            swBuildCSData.Start();
            sheetData = new SheetData(count, infos, totalCount, data);
            Console.WriteLine($"build C# data cost Time {swBuildCSData.ElapsedTicks}   ticks  ");
        });
#else
{        var sb = new StringBuilder();
        XLCell cellss = new XLCell();
        for (uint row = 1; row < wks.RowCount; row++)
        {
            var rowCount = wks.Row(row).CellCount;
            var count = MathF.Min(rowCount, 12);
            for (ushort col = 1; col <= count; col++)
            {
                var cell = wks.Cell(row, col);
                switch (cell.Value.Type)
                {
                    case XLValueType.Empty:
                        sb.Append("");
                        sb.Append("|");
                        break;
                    case XLValueType.Boolean:
                        sb.Append(cell.Value.Boolean);
                        sb.Append("|");
                        break;
                    case XLValueType.Integer:
                        sb.Append(cell.Value.Integer);
                        sb.Append("|");
                        break;
                    case XLValueType.Float:
                        sb.Append(cell.Value.Float);
                        sb.Append("|");
                        break;
                    case XLValueType.Error:
                        sb.Append("Error");
                        sb.Append("|");
                        break;
                    case XLValueType.String:
                        sb.Append(cell.Value.String);
                        sb.Append("|");
                        break;
                    default:
                        throw new ArgumentOutOfRangeException();
                }

                cell.Dispose();
            }

            sb.AppendLine("");
        }
}
#endif


        doc.Close();
        // //Console.WriteLine($"excel content\n {sb.ToString()}");
        Console.WriteLine($"read full excel cost {sw.ElapsedMilliseconds}ms");
    }
}