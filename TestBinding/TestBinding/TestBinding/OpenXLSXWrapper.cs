/********************************************************************
 ** data: 2024-01-26 14:42:51
 ** ver.: 1.0
 ** desc:
 ********************************************************************/

#if UNITY_EDITOR_WIN
using System;
using System.Collections.Generic;
#else
using System.Runtime.CompilerServices;
#endif
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using OpenXLSX.OpenXLSX;

public static class OpenSLSXWrapperEx
{
    public static XLValueType ValueType(this OpenXLSXCellData cellData)
    {
        return (XLValueType)cellData.ValueType;
    }

    public static string StringV(this OpenXLSXCellData cellData, OpenXLSXWrapperSheetData sheetData)
    {
        unsafe
        {
            return sheetData.GetCellString(cellData.PU8Str);
        }
    }
}


[StructLayout(LayoutKind.Explicit, Pack = 4, Size = 12)]
public unsafe struct OpenXLSXCellData
{
    [FieldOffset(0)]
    public int ValueType;

    [FieldOffset(4)]
    public bool boolV;

    [FieldOffset(4)]
    public double floatV;

    [FieldOffset(4)]
    public long IntV;

    [FieldOffset(4)]
    public void* PU8Str;
}

[StructLayout(LayoutKind.Explicit)]
public struct RowPosInfo
{
    [FieldOffset(0)]
    public int BeginIndex;

    [FieldOffset(4)]
    public int RowCellCount;
}

public class OpenXLSXWrapperSheetData
{
#if UNITY_EDITOR_WIN
    [DllImport("kernel32.dll", EntryPoint = "CopyMemory", SetLastError = false)]
    public static extern void CopyMemory(IntPtr dest, IntPtr src, uint count);

#endif
    private OpenXLSXCellData[] _arrCellsData = null;
    private RowPosInfo[] _arrRowPosInfos = null;
    private Dictionary<IntPtr, string> _dicAllStrs = new();

    public int RowCount => _arrRowPosInfos.Length;


    public OpenXLSXWrapperSheetData(ulong rowInfoCount, IntPtr rowInfos, ulong cellCount, IntPtr cellsData)
    {
        var sw = new Stopwatch();
        sw.Start();
        _arrRowPosInfos = new RowPosInfo[(int)rowInfoCount];
        _arrCellsData = new OpenXLSXCellData[(int)cellCount];
        _dicAllStrs.EnsureCapacity((int)rowInfoCount);

        unsafe
        {
            fixed (OpenXLSXCellData* pCell = _arrCellsData)
            {
                fixed (RowPosInfo* pRowsInfo = _arrRowPosInfos)
                {
#if UNITY_EDITOR_WIN
                    CopyMemory(new IntPtr(pCell), cellsData, (uint)cellCount * (uint)sizeof(OpenXLSXCellData));
                    CopyMemory(new IntPtr(pRowsInfo), rowInfos, (uint)rowInfoCount * (uint)sizeof(RowPosInfo));
#else
                    Unsafe.CopyBlock(pCell, cellsData.ToPointer(), (uint)cellCount * (uint)sizeof(OpenXLSXCellData));
                    Unsafe.CopyBlock(pRowsInfo, rowInfos.ToPointer(), (uint)rowInfoCount * (uint)sizeof(RowPosInfo));
#endif
                }
            }

            foreach (var cellData in _arrCellsData)
            {
                if (cellData.ValueType == 5) // XLValueType::String
                {
                    try
                    {
                        var str3 = Marshal.PtrToStringUTF8(new IntPtr(cellData.PU8Str)) ?? "";
                        var ret = _dicAllStrs.TryAdd((IntPtr)cellData.PU8Str, str3);
                        if (!ret)
                        {
                            // Console.WriteLine($"repeat {ret} {str3}");
                        }
                    }
                    catch (Exception e)
                    {
                        Console.WriteLine(e);
                    }
                }
            }

            Console.WriteLine($"convertU8Str _dicAllStrs {_dicAllStrs.Count} cost {sw.ElapsedTicks}   ticks");
        }
    }


    public void IterateRows(int startRowNum, Action<int> onRow)
    {
        for (int i = startRowNum; i <= _arrRowPosInfos.Length; i++)
        {
            onRow.Invoke(i);
        }
    }

    public RowPosInfo GetRowCellPosInfo(int rowNum)
    {
        var rowIndex = rowNum - 1;
        if (rowIndex >= _arrRowPosInfos.Length || rowIndex < 0)
        {
            throw new Exception($"rowIndex 越界 rowCount = {RowCount} rowIndex:{rowIndex}");
        }

        return _arrRowPosInfos[rowIndex];
    }

    public unsafe string GetCellString(void* pStr)
    {
        return _dicAllStrs[new IntPtr(pStr)];
    }

    public OpenXLSXCellData GetCell(int rowNum, int colNum)
    {
        RowPosInfo rowPosInfo = GetRowCellPosInfo(rowNum);
        var colIndex = colNum - 1;
        var rowLen = rowPosInfo.RowCellCount;
        if (colIndex < 0 || colIndex >= rowLen)
        {
            //throw new ArgumentOutOfRangeException($"colIndex:{colIndex} rowLen:{rowLen}");
            return new OpenXLSXCellData()
            {
                ValueType = (int)XLValueType.Empty,
                PU8Str = null,
            };
        }

        var realIndex = rowPosInfo.BeginIndex + colIndex;
        return _arrCellsData[realIndex];
    }

    public OpenXLSXCellData Cell(int rowNum, int colNum)
    {
        return GetCell(rowNum, colNum);
    }
}


public class OpenXLSXWrapper : IDisposable
{
    private XLDocument _doc = null;
    private XLWorkbook _xlWorkbook = null;
    private Dictionary<string, (XLWorksheet, OpenXLSXWrapperSheetData)> _dicSheets = new();

    private bool _hasDispose = false;

    public OpenXLSXWrapper(string excelPath)
    {
        _hasDispose = false;
        _doc = new XLDocument();
        _doc.Open(excelPath);
        _xlWorkbook = _doc.Workbook;
    }


    public (XLWorksheet, OpenXLSXWrapperSheetData) GetSheetTP(string sheetName)
    {
        if (_dicSheets.TryGetValue(sheetName, out var tp))
        {
            return tp;
        }
        else
        {
            var wkSheet = _xlWorkbook.Worksheet(sheetName);
            OpenXLSXWrapperSheetData openXlsxWrapperSheetData = null;
            wkSheet.IterateAllCells((count, infos, totalCount, data) => { openXlsxWrapperSheetData = new OpenXLSXWrapperSheetData(count, infos, totalCount, data); });
            var tpNew = (wkSheet, sheetData: openXlsxWrapperSheetData);
            _dicSheets.Add(sheetName, tpNew);
            return tpNew;
        }
    }

    ~OpenXLSXWrapper()
    {
        Dispose();
    }

    public void Dispose()
    {
        if (!_hasDispose)
        {
            _hasDispose = true;
            foreach (var kv in _dicSheets)
            {
                kv.Value.Item1.Dispose();
            }

            _doc.Close();
            _doc.Dispose();
        }
    }
}