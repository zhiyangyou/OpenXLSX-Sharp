using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;
using OpenXLSX.OpenXLSX;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;

namespace M11.Editor
{
    public class ImportI18NTexts
    { 
        [MenuItem("Test/Test读取所有 &4")]
        public static void TestReadAllI18N()
        {
            // Debug.LogError("测试读取所有i18n列");
            var listAllExcelFilePaths = new DirectoryInfo("D:\\temp\\testAllExcels").EnumerateFiles("*.xlsx");
            Dictionary<string, Dictionary<string, string>> dic = new();
            var sw = new Stopwatch();
            sw.Start();
            var swSingle = new Stopwatch();

            foreach (var excelFilePath in listAllExcelFilePaths)
            {
                int totalRowCount = -1;
                swSingle.Restart();
                var path = excelFilePath.FullName;
                // Debug.LogError($"excelFilePath:{path}");
                if (path.Contains("~"))
                {
                    continue;
                } 
                var dicSingle = new Dictionary<string, string>();
                dic.Add(path, dicSingle);
                // Debug.LogError($"正在打开:>>>>> {path} ");
                if (excelFilePath.FullName.Contains("charge"))
                {
                    int a = 0;
                }
                using OpenXLSXWrapper wrapper = new OpenXLSXWrapper(path);
                // var allSheetNames = wrapper.GetAllSheetNames();
                uint sheetCount = wrapper.GetSheetCount();

                // foreach (var sheetName in allSheetNames)
                for (uint sheetIndex = 1; sheetIndex <= sheetCount; sheetIndex++)
                {
                    Dictionary<int, (int, string)> dicI18nColIndex = new(); // key是多语言文本所在列，value(多语言文本key所在列,多语言文本key所在列名字)
                    Dictionary<int, (int, string)> dicI18nColIndex2 = new(); // key是多语言文本所在列，value(多语言文本key所在列,多语言文本key所在列名字)
                    // (XLWorksheet, OpenXLSXWrapperSheetData) tp = wrapper.GetSheetTP(sheetName);
                    (XLWorksheet, OpenXLSXWrapperSheetData) tp = wrapper.GetSheetTP((int)sheetIndex);
                    OpenXLSXWrapperSheetData data = tp.Item2;
                    const int rowIndexHeader = 3;
                    const int rowIndexContentBegin = 5;
                    const string kStrI18N = "_i18n";
                    if (data.RowCount < rowIndexContentBegin)
                    {
                        continue;
                    }
                    totalRowCount += data.RowCount;
                    var rowPosInfo = data.GetRowCellPosInfo(rowIndexHeader);
                    for (int i = 1; i <= rowPosInfo.RowCellCount; i++)
                    {
                        string strColName = data.Cell(rowIndexHeader, i).CellSafeStringValue(data, null);
                        if (!string.IsNullOrEmpty(strColName) && strColName.EndsWith(kStrI18N))
                        {
                            string keyColName = strColName.Replace(kStrI18N, "");
                            dicI18nColIndex.Add(i, (-1, keyColName));
                        }
                    }
                    foreach (var kv in dicI18nColIndex)
                    {
                        int colIndex = kv.Key;
                        string keyColName = kv.Value.Item2;
                        for (int i = 1; i <= rowPosInfo.RowCellCount; i++)
                        {
                            var name = data.Cell(rowIndexHeader, i).CellSafeStringValue(data, null);
                            if (name == keyColName)
                            {
                                dicI18nColIndex2.Add(colIndex, (i, keyColName));
                                // dicI18nColIndex[colIndex] = (i, keyColName);
                            }
                        }
                    }
                    var sb = new StringBuilder();
                    data.IterateRows(rowIndexContentBegin, rowIndex =>
                    {
                        foreach (var kv in dicI18nColIndex2)
                        {
                            int colIndexI18NKey = kv.Value.Item1;
                            int colIndexI18NValue = kv.Key;
                            var keyCell = data.GetCell(rowIndex, colIndexI18NKey);
                            var valueCell = data.GetCell(rowIndex, colIndexI18NValue);
                            string strI18nKey = data.GetCell(rowIndex, colIndexI18NKey).CellSafeStringValue(data);
                            string strI18nValue = data.GetCell(rowIndex, colIndexI18NValue).CellSafeStringValue(data);
                            // if (dicSingle.ContainsKey(strI18nKey))
                            // {
                            // Debug.LogError($"重复key{strI18nKey}");
                            // }
                            dicSingle.TryAdd(strI18nKey, strI18nValue);
                        }
                    });
                }
                var costSingle = swSingle.ElapsedMilliseconds;
                if (costSingle >= 10)
                {
                    Debug.LogError($"222打开结束:<<<<<  {path} costTime {costSingle}ms totalRowCount :{totalRowCount}");
                }
            }
            int total = 0;
            foreach (var kv in dic)
            {
                total += kv.Value.Count;
            }
            Debug.LogError($"dic{dic.Count} 搜集数量：{total} cost {sw.ElapsedMilliseconds}ms");
        }
    }
}
