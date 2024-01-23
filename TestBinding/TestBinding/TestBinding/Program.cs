// See https://aka.ms/new-console-template for more information

using OpenXLSX.OpenXLSX;

class Program
{
    static void Main()
    {
        XLDocument doc = new XLDocument() ;
        doc.Create("./Demo02.xlsx");
        var wks = doc.Workbook.Worksheet("Sheet1");

        // Similar cell values, which are represented by XLCellValue objects, formulas are represented
        // by XLFormula objects. They can be accessed through the XLCell interface using the .formula()
        // member function. It should be noted, however, that the functionality of XLFormula is somewhat
        // limited. Excel often uses 'shared' formulas, where the same formula is applied to several
        // cells. XLFormula cannot handle shared formulas. Also, it cannot handle array formulas. This,
        // in effect, means that XLFormula is not very useful for reading formulas from existing spread-
        // sheets, but should rather be used to add or overwrite formulas to spreadsheets.

        var v= wks.Cell("A1").Value;
        2024年1月24日00:07:09  处理Value 和 Formula 的 Get 和 Set的代理
        // wks.cell("B1").value() = 1;
        // wks.cell("C1").value() = 2;
        // wks.cell("D1").value() = 3;
        
        doc.Save();
        doc.Close();
    }
}