using UnityEditor;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using NPOI.SS.UserModel;
using NPOI.XSSF.UserModel;
using OpenXLSX.OpenXLSX;
using UnityEngine;
using Debug = UnityEngine.Debug;


public class TestExcelPerf
{
    static (long, long) CostTime(int forCount, Func<StringBuilder> ac, string name)
    {
        StringBuilder sb = null;
        var sw = new Stopwatch();
        sw.Start();
        for (int i = 0; i < forCount; i++)
        {
            sb = ac.Invoke();
        }

        sw.Stop();
        var total = sw.ElapsedMilliseconds;
        var avage = total / forCount;
        Debug.Log($"{name} excelContent\n{sb.ToString()}");
        Debug.Log($"Do {name} Avage CostTime : {sw.ElapsedMilliseconds / (long)forCount}ms total : {sw.ElapsedMilliseconds} ms");
        return (avage, total);
    }


    static StringBuilder NPOI_Foreach(string excelFilePath, string sheetName)
    {
        var sb = new StringBuilder();
        using (FileStream fileStream = new FileStream(excelFilePath, FileMode.Open, FileAccess.Read))
        {
            XSSFWorkbook workbook = new(fileStream);
            XSSFSheet sheet = workbook.GetSheet(sheetName) as XSSFSheet;
            int rowNum = 1;
            if (sheet != null)
            {
                foreach (IRow row in sheet)
                {
                    int colNum = 1;
                    foreach (var cell in row)
                    {
                        if (cell != null)
                        {
                            switch (cell.CellType)
                            {
                                case CellType.Unknown:
                                    sb.Append("unkhnow");
                                    sb.Append("|");
                                    break;
                                case CellType.Numeric:
                                    sb.Append(cell.NumericCellValue);
                                    sb.Append("|");
                                    break;
                                case CellType.String:
                                    sb.Append(cell.StringCellValue);
                                    sb.Append("|");
                                    break;
                                case CellType.Formula:
                                    sb.Append("Formula");
                                    sb.Append("|");
                                    break;
                                case CellType.Blank:
                                    sb.Append("blank");
                                    sb.Append("|");
                                    break;
                                case CellType.Boolean:
                                    sb.Append(cell.BooleanCellValue);
                                    sb.Append("|");
                                    break;
                                case CellType.Error:
                                    sb.Append("error");
                                    sb.Append("|");
                                    break;
                                default:
                                    throw new ArgumentOutOfRangeException();
                            }
                        }

                        colNum++;
                    }

                    sb.AppendLine("");

                    rowNum++;
                }
            }
        }

        return sb;
    }

    static StringBuilder NPOI_RandomAccess2(string excelFilePath)
    {
        var sb = new StringBuilder();
        using (FileStream fileStream = new FileStream(excelFilePath, FileMode.Open, FileAccess.Read))
        {
            XSSFWorkbook workbook = new(fileStream);
            var sheetCount = workbook.NumberOfSheets;
            for (int i = 0; i < sheetCount; i++)
            {
                XSSFSheet sheet = workbook.GetSheetAt(i) as XSSFSheet;

                if (sheet != null)
                {
                    //这种方式和上边的差不多
                    for (int rowIndex = 0; rowIndex < sheet.LastRowNum; rowIndex++)
                    {
                        IRow row = sheet.GetRow(rowIndex);
                        if (row != null)
                        {
                            for (int colIndex = 0; colIndex < row.LastCellNum; colIndex++)
                            {
                                var cell = row.GetCell(colIndex);
                                if (cell != null)
                                {
                                    switch (cell.CellType)
                                    {
                                        case CellType.Unknown:
                                            sb.Append("unkhnow");
                                            sb.Append("|");
                                            break;
                                        case CellType.Numeric:
                                            sb.Append(cell.NumericCellValue);
                                            sb.Append("|");
                                            break;
                                        case CellType.String:
                                            sb.Append(cell.StringCellValue);
                                            sb.Append("|");
                                            break;
                                        case CellType.Formula:
                                            sb.Append("Formula");
                                            sb.Append("|");
                                            break;
                                        case CellType.Blank:
                                            sb.Append("blank");
                                            sb.Append("|");
                                            break;
                                        case CellType.Boolean:
                                            sb.Append(cell.BooleanCellValue);
                                            sb.Append("|");
                                            break;
                                        case CellType.Error:
                                            sb.Append("error");
                                            sb.Append("|");
                                            break;
                                        default:
                                            throw new ArgumentOutOfRangeException();
                                    }
                                }
                            }
                        }
                        sb.AppendLine("");
                    }
                }
            }
        }

        return sb;
    }

    static StringBuilder NPOI_RandomAccess(string excelFilePath, string sheetName)
    {
        var sb = new StringBuilder();
        using (FileStream fileStream = new FileStream(excelFilePath, FileMode.Open, FileAccess.Read))
        {
            XSSFWorkbook workbook = new(fileStream);
            XSSFSheet sheet = workbook.GetSheet(sheetName) as XSSFSheet;

            if (sheet != null)
            {
                //这种方式和上边的差不多
                for (int rowIndex = 0; rowIndex < sheet.LastRowNum; rowIndex++)
                {
                    IRow row = sheet.GetRow(rowIndex);
                    if (row != null)
                    {
                        for (int colIndex = 0; colIndex < row.LastCellNum; colIndex++)
                        {
                            var cell = row.GetCell(colIndex);
                            if (cell != null)
                            {
                                switch (cell.CellType)
                                {
                                    case CellType.Unknown:
                                        sb.Append("unkhnow");
                                        sb.Append("|");
                                        break;
                                    case CellType.Numeric:
                                        sb.Append(cell.NumericCellValue);
                                        sb.Append("|");
                                        break;
                                    case CellType.String:
                                        sb.Append(cell.StringCellValue);
                                        sb.Append("|");
                                        break;
                                    case CellType.Formula:
                                        sb.Append("Formula");
                                        sb.Append("|");
                                        break;
                                    case CellType.Blank:
                                        sb.Append("blank");
                                        sb.Append("|");
                                        break;
                                    case CellType.Boolean:
                                        sb.Append(cell.BooleanCellValue);
                                        sb.Append("|");
                                        break;
                                    case CellType.Error:
                                        sb.Append("error");
                                        sb.Append("|");
                                        break;
                                    default:
                                        throw new ArgumentOutOfRangeException();
                                }
                            }
                        }
                    }
                    sb.AppendLine("");
                }
            }
        }

        return sb;
    }

    public static unsafe StringBuilder OpenXLSX2(string excelFilePath)
    {
        var sb = new StringBuilder();
        // var swLoad = new Stopwatch();
        // swLoad.Start();
        OpenXLSXWrapper openXlsxWrapper = new OpenXLSXWrapper(excelFilePath);
        foreach (var sheetName in openXlsxWrapper.GetAllSheetNames())
        {
            var tp = openXlsxWrapper.GetSheetTP(sheetName);
            // swLoad.Stop();
            // var costReadFullTime = swLoad.ElapsedMilliseconds;
            // var swIterate = new Stopwatch();
            // swIterate.Start();

            var sheetData = tp.Item2;
            for (int rowNum = 1; rowNum <= sheetData.RowCount; rowNum++)
            {
                var rowInfo = sheetData.GetRowCellPosInfo(rowNum);
                var cellCount = rowInfo.RowCellCount;
                for (int colNum = 1; colNum <= cellCount; colNum++)
                {
                    var cellData = sheetData.GetCell(rowNum, colNum);
                    XLValueType type = (XLValueType)cellData.ValueType;
                    switch (type)
                    {
                        case XLValueType.Empty:
                            sb.Append("");
                            sb.Append("|");
                            break;
                        case XLValueType.Boolean:
                            sb.Append(cellData.boolV);
                            sb.Append("|");
                            break;
                        case XLValueType.Integer:
                            sb.Append(cellData.IntV);
                            sb.Append("|");
                            break;
                        case XLValueType.Float:
                            sb.Append(cellData.floatV);
                            sb.Append("|");
                            break;
                        case XLValueType.Error:
                            sb.Append("Error");
                            sb.Append("|");
                            break;
                        case XLValueType.String:
                            sb.Append(sheetData.GetCellString(cellData.PU8Str));
                            sb.Append("|");
                            break;
                        default:
                            throw new ArgumentOutOfRangeException();
                    }
                }

                sb.AppendLine("");
            }
        }
        // swIterate.Stop();
        return sb;
    }

    public static unsafe StringBuilder OpenXLSX(string excelFilePath, string sheetName)
    {
        var sb = new StringBuilder();
        // var swLoad = new Stopwatch();
        // swLoad.Start();
        OpenXLSXWrapper openXlsxWrapper = new OpenXLSXWrapper(excelFilePath);
        var tp = openXlsxWrapper.GetSheetTP(sheetName);
        // swLoad.Stop();
        // var costReadFullTime = swLoad.ElapsedMilliseconds;
        // var swIterate = new Stopwatch();
        // swIterate.Start();

        var sheetData = tp.Item2;
        for (int rowNum = 1; rowNum <= sheetData.RowCount; rowNum++)
        {
            var rowInfo = sheetData.GetRowCellPosInfo(rowNum);
            var cellCount = rowInfo.RowCellCount;
            for (int colNum = 1; colNum <= cellCount; colNum++)
            {
                var cellData = sheetData.GetCell(rowNum, colNum);
                XLValueType type = (XLValueType)cellData.ValueType;
                switch (type)
                {
                    case XLValueType.Empty:
                        sb.Append("");
                        sb.Append("|");
                        break;
                    case XLValueType.Boolean:
                        sb.Append(cellData.boolV);
                        sb.Append("|");
                        break;
                    case XLValueType.Integer:
                        sb.Append(cellData.IntV);
                        sb.Append("|");
                        break;
                    case XLValueType.Float:
                        sb.Append(cellData.floatV);
                        sb.Append("|");
                        break;
                    case XLValueType.Error:
                        sb.Append("Error");
                        sb.Append("|");
                        break;
                    case XLValueType.String:
                        sb.Append(sheetData.GetCellString(cellData.PU8Str));
                        sb.Append("|");
                        break;
                    default:
                        throw new ArgumentOutOfRangeException();
                }
            }

            sb.AppendLine("");
        }

        // swIterate.Stop();
        return sb;
    }

    [MenuItem("Test/TestPerf2-全部excel文件")]
    public static void Test3()
    {
        Do2("D:\\temp\\testAllExcels");
    }

    [MenuItem("Test/TestPerf2-16个文件")]
    public static void Test4()
    {
        Do2("D:\\temp\\testAllExcels-只有一部分");
    }

    public static void Do2(string dir)
    {
        int forCount = 1;

        var listAllExcelFilePaths = new DirectoryInfo(dir).EnumerateFiles("*.xlsx");


        var OpenXLSXTime = CostTime(forCount, () =>
            {
                foreach (var fileInfo in listAllExcelFilePaths)
                {
                    OpenXLSX2(fileInfo.FullName);
                }
                return new StringBuilder();
            }, $"OpenXLSX打开全部excel文件 {listAllExcelFilePaths.Count()}");


        // var NPOI2Time_RamdonAccess = (100, 100);

        var NPOI2Time_RamdonAccess = CostTime(forCount, () =>
            {
                foreach (var fileInfo in listAllExcelFilePaths)
                {
                    NPOI_RandomAccess2(fileInfo.FullName);
                }
                return new StringBuilder();
            }, $"NPOI_RandomAccess打开全部excel文件 {listAllExcelFilePaths.Count()}");


        Debug.Log(
            $"NPOI性能倍数:  {((double)NPOI2Time_RamdonAccess.Item2 / (double)OpenXLSXTime.Item2):F1}   " +
            $"\nCost OpenXLSX:{OpenXLSXTime.Item1}  NPOI2_RandomAccess:{NPOI2Time_RamdonAccess.Item1} "
        );
    }

    [MenuItem("Test/TestPerf-单文件重复打开")]
    public static void Do()
    {
        string excelFilePath = Path.Combine(Application.dataPath, "test.xlsx");
        string sheetName = "test1";
        int forCount = 10;
        var fileName = Path.GetFileName(excelFilePath);
        var OpenXLSXTime = CostTime(forCount, () => OpenXLSX(excelFilePath, sheetName), $"OpenXLSX打开{fileName}");
        // var NPOITime_Foreach = CostTime(forCount, () => NPOI_Foreach(excelFilePath, sheetName), $"NPOI_Foreach打开{fileName}");
        var NPOI2Time_RamdonAccess = CostTime(forCount, () => NPOI_RandomAccess(excelFilePath, sheetName), $"NPOI_RandomAccess打开{fileName}");
        Debug.Log(
            $"NPOI性能倍数:  {((double)NPOI2Time_RamdonAccess.Item2 / (double)OpenXLSXTime.Item2):F1}   " +
            $"excel {fileName}" +
            $"\nCost OpenXLSX:{OpenXLSXTime.Item1}  NPOI2_RandomAccess:{NPOI2Time_RamdonAccess.Item1} "
        );
    }
}