// See https://aka.ms/new-console-template for more information

using System.Diagnostics;
using System.Text;
using OpenXLSX.OpenXLSX;

class Program
{
    static void Main()
    {
        var sw = new Stopwatch();
        sw.Start();
        using XLDocument doc = new XLDocument();
        doc.Open("G:\\temp\\test1.xlsx"); 
        var wks = doc.Workbook.Worksheet("testSheet");
    

        var sb = new StringBuilder();
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
            }

            sb.AppendLine("");
        }

        doc.Close();
        Console.WriteLine($"excel content\n {sb.ToString()}");
        Console.WriteLine($"read full excel cost {sw.ElapsedMilliseconds}ms");
    }
}