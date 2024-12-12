using System;
using OpenXLSX.OpenXLSX;
 
using File = System.IO.File;

public static class OpenXLSXUtils
{
    /// <summary>
    /// 外部自己确保文件存在，且文件格式合法，否则unity 将会crash
    /// </summary>
    /// <param name="excelFilePath"></param>
    /// <param name="sheetName"></param>
    /// <param name="onSheetData"></param>
    public static void ReadExcelSheet(string excelFilePath, string sheetName, Action<OpenXLSXWrapperSheetData> onSheetData)
    {
        if (!File.Exists(excelFilePath))
        {
            Console.WriteLine($"文件不存在，检查配置的文件夹路径是否正确:{excelFilePath}");
            return;
        }

        using OpenXLSXWrapper wrapper = new OpenXLSXWrapper(excelFilePath,true);
        var tp = wrapper.GetSheetTP(sheetName);
        try
        {
            onSheetData.Invoke(tp.Item2);
        }
        catch (Exception e)
        {
            Console.WriteLine($"ReadExcelSheet时出现错误，msg {e.Message}\n{e.StackTrace}");
        }
    }


    public static object CellSafeValue(this OpenXLSXCellData cell, OpenXLSXWrapperSheetData sheetData, Type cellType, object defaultV,
        bool defaultNeedError = false, string errorMsg = "")
    {
        if (cellType == typeof(int))
        {
            return CellSafeIntValue(cell, (int)(defaultV ?? 0), defaultNeedError, errorMsg);
        }
        else if (cellType == typeof(string))
        {
            var ret = CellSafeStringValue(cell, sheetData, (string)(defaultV ?? ""), defaultNeedError, errorMsg);
            return ret;
        }
        else if (cellType == typeof(float))
        {
            return CellSafeFloatValue(cell, (float)(defaultV ?? 0f), defaultNeedError, errorMsg);
        }
        else if (cellType == typeof(bool))
        {
            return CellSafeBoolValue(cell, (bool)(defaultV ?? false), sheetData, defaultNeedError, errorMsg);
        }
        else
        {
            throw new NotImplementedException("OpenXLSX 尚未实现的cell数据类型");
        }
    }


    public static int CellSafeIntValue(this OpenXLSXCellData cell, int defaultV, bool defaultNeedError = false, string errorMsg = "")
    {
        var type = cell.ValueType();
        if (type == XLValueType.Empty)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
            }

            return defaultV;
        }

        if (type != XLValueType.Float && type != XLValueType.Integer)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
            }

            return defaultV;
        }
        else
        {
            if (type == XLValueType.Float)
            {
                return (int)cell.floatV;
            }
            else if (type == XLValueType.Integer)
            {
                return (int)cell.IntV;
            }
            else
            {
                throw new Exception($"OpenXLSX::CellSafeIntValue 这是bug，出现了意料之外的类型 {type.ToString()}");
            }
        }
    }


    public static bool CellSafeBoolValue(this OpenXLSXCellData cell, bool defaultV, OpenXLSXWrapperSheetData sheetData, bool defaultNeedError = false,
        string errorMsg = "")
    {
        var type = cell.ValueType();
        if (type == XLValueType.Empty)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
                return defaultV;
            }
        }

        if (type != XLValueType.Boolean && type != XLValueType.String)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
            }

            return defaultV;
        }
        else
        {
            if (type == XLValueType.Boolean)
            {
                return cell.boolV;
            }
            else if (type == XLValueType.String)
            {
                if (bool.TryParse(cell.StringV(sheetData), out var ret))
                {
                    return ret;
                }
                else
                {
                    if (defaultNeedError)
                    {
                        Console.WriteLine(errorMsg);
                    }

                    return defaultV;
                }
            }
            else
            {
                throw new Exception($"OpenXLSX::CellSafeBoolValue 这是bug，出现了意料之外的类型 {type.ToString()}");
            }
        }
    }


    public static float CellSafeFloatValue(this OpenXLSXCellData cell, float defaultV, bool defaultNeedError = false, string errorMsg = "")
    {
        var type = cell.ValueType();
        if (type == XLValueType.Empty)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
                return defaultV;
            }
        }

        if (type != XLValueType.Float && type != XLValueType.Integer)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
            }

            return defaultV;
        }
        else
        {
            if (type == XLValueType.Float)
            {
                return (float)cell.floatV;
            }
            else if (type == XLValueType.Integer)
            {
                return (float)cell.IntV;
            }
            else
            {
                throw new Exception($"OpenXLSX::CellSafeFloatValue 这是bug，出现了意料之外的类型 {type.ToString()}");
            }
        }
    }


    public static string CellSafeStringValue(this OpenXLSXCellData cell, OpenXLSXWrapperSheetData sheetData, string defaultV = "",
        bool defaultNeedError = false, string errorMsg = "")
    {
        var type = cell.ValueType();
        if (type == XLValueType.Empty)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
                return defaultV;
            }
        }

        if (type == XLValueType.Boolean)
        {
            return cell.boolV.ToString();
        }

        if (type == XLValueType.Float)
        {
            return cell.floatV.ToString();
        }

        if (type == XLValueType.Integer)
        {
            return cell.IntV.ToString();
        }

        if (type != XLValueType.String)
        {
            if (defaultNeedError)
            {
                Console.WriteLine(errorMsg);
            }

            return defaultV;
        }
        else
        {
            if (type == XLValueType.String)
            {
                return cell.StringV(sheetData);
            }
            else
            {
                throw new Exception($"OpenXLSX::CellSafeStringValue 这是bug，出现了意料之外的类型 {type.ToString()}");
            }
        }
    }
}
