// See https://aka.ms/new-console-template for more information

using System.Diagnostics;
using System.Text;
using OpenXLSX.OpenXLSX;


class Program
{
    static void Main()
    {
        unsafe
        {
            Console.WriteLine($"OpenXLSXCellData {sizeof(OpenXLSXCellData)}");
            Console.WriteLine($"RowPosInfo {sizeof(RowPosInfo)}");
        }

        List<(string, string)> listExcels = new List<(string, string)>()
        {
            ("F:\\temp\\test2.xlsx", "testSheet"),
        };

        foreach (var tpExcelSheet in listExcels)
        {
            var sw = new Stopwatch();
            sw.Start();
            OpenXLSXWrapper openXlsxWrapper = new OpenXLSXWrapper(tpExcelSheet.Item1);
            var tp = openXlsxWrapper.GetSheetTP(tpExcelSheet.Item2);
            sw.Stop();
            var costReadFullTime = sw.ElapsedMilliseconds;


            var swIterate = new Stopwatch();
            swIterate.Start();
            Dictionary<int, int> _dicCellTypeCounter = new();

            var sbAllCellStrings = new StringBuilder();
            var sheetData = tp.Item2;
            for (int rowNum = 1; rowNum <= sheetData.RowCount; rowNum++)
            {
                var rowInfo = sheetData.GetRowCellPosInfo(rowNum);
                var cellCount = rowInfo.RowCellCount;
                sbAllCellStrings.Append($"row:{rowNum} ");
                for (int colNum = 1; colNum <= cellCount; colNum++)
                {
                    var cell = sheetData.GetCell(rowNum, colNum);
                    if (cell.ValueType == 5)
                    {
                        unsafe
                        {
                            sbAllCellStrings.Append(sheetData.GetCellString(cell.PU8Str));
                        }
                    }
                    else if (cell.ValueType == (int)XLValueType.Empty)
                    {
                        sbAllCellStrings.Append("[empty]");
                    }
                    sbAllCellStrings.Append("|");
                    if (!_dicCellTypeCounter.ContainsKey(cell.ValueType))
                    {
                        _dicCellTypeCounter[cell.ValueType] = 1;
                    }
                    else
                    {
                        _dicCellTypeCounter[cell.ValueType]++;
                    }
                }

                sbAllCellStrings.AppendLine("");
            }

            swIterate.Stop();
            var iterateCostTime = swIterate.ElapsedMilliseconds;

            Console.WriteLine($"sbAllCellStrings.ToString().Length {sbAllCellStrings.ToString()}");
            Console.WriteLine($"sbAllCellStrings.ToString().Length {sbAllCellStrings.ToString().Length}");
            Console.WriteLine($"iterate datas CostTime = {iterateCostTime}ms");
            Console.WriteLine($"read full excel cost {costReadFullTime}ms");
        }
    }
}