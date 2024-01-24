// See https://aka.ms/new-console-template for more information

using CppSharp;
using CppSharp.Generators;
using CppSharp.Parser;
using CppSharp.Passes;
using ASTContext = CppSharp.AST.ASTContext;
using TranslationUnit = CppSharp.AST.TranslationUnit;

namespace SpineCppGenBindings;

public class LibOpenXLSX : ILibrary
{
    private string XLSXIncludeDir = "OpenXLSX\\OpenXLSX\\headers";
    private string XLSXIncludeDir2 = "OpenXLSX\\OpenXLSX";
    private string XLSXExtennalIncludeDir = "OpenXLSX\\OpenXLSX\\external";
    private string XLSXCMakeIncludeDir = "OpenXLSX\\CmakeBuild\\OpenXLSX";
    private string XLSXSourceDir = "OpenXLSX\\OpenXLSX\\sources";
    private string XLSXExternalDir = "OpenXLSX\\OpenXLSX\\external";
    private string CSCodeOutputDir = "GenBinding\\CSCode";

    static void MakeRealPath(ref string str)
    {
        //I:\\__workSpace\\_Github\\OpenXLSX-Sharp\\
        var basePath = new DirectoryInfo(AppDomain.CurrentDomain.BaseDirectory)
            .Parent.Parent.Parent.Parent.Parent.Parent;
        str = $"{basePath}\\{str}";
    }

    public LibOpenXLSX()
    {
        MakeRealPath(ref XLSXIncludeDir);
        MakeRealPath(ref XLSXIncludeDir2);
        MakeRealPath(ref XLSXExtennalIncludeDir);
        MakeRealPath(ref XLSXCMakeIncludeDir);
        MakeRealPath(ref XLSXSourceDir);
        MakeRealPath(ref XLSXExternalDir);
        MakeRealPath(ref CSCodeOutputDir);
    }

    public void Preprocess(Driver driver, ASTContext ctx)
    { 
        ctx.IgnoreHeadersWithName("pugixml");
        // ctx.IgnoreClassField("XLCellValue","m_value");
        // ctx.IgnoreClassWithName("variant");
        // ctx.IgnoreClassWithName("XLCellValue");
        // ctx.ignore("variant");
    }

    public void Postprocess(Driver driver, ASTContext ctx)
    {
    }

    private void OnUnitGenerated(GeneratorOutput obj)
    {
    }

    private void CleanFiles()
    {
        var dirInfo = new DirectoryInfo(CSCodeOutputDir);
        foreach (var fileInfo in dirInfo.GetFiles())
        {
            File.Delete(fileInfo.FullName);
        }
    }

    public void Setup(Driver driver)
    {
        CleanFiles();


        driver.ParserOptions.MicrosoftMode = true;
        driver.ParserOptions.SetupMSVC(VisualStudioVersion.VS2022);
        driver.ParserOptions.Verbose = true;
        driver.ParserOptions.LanguageVersion = LanguageVersion.CPP17;
        driver.ParserOptions.EnableRTTI = true;
        driver.ParserOptions.AddArguments("-fcxx-exceptions");

        var options = driver.Options;
            
            

        options.GenerateClassTemplates = true;
        // options.GenerationOutputMode = GenerationOutputMode.FilePerUnit;//生成多个文件
        options.GeneratorKind = GeneratorKind.CSharp;
        options.OutputDir = CSCodeOutputDir;


        var module = options.AddModule("OpenXLSX");

        module.IncludeDirs.Add(XLSXIncludeDir);
        module.IncludeDirs.Add(XLSXIncludeDir2);
        module.IncludeDirs.Add(XLSXExtennalIncludeDir);
        module.IncludeDirs.Add(XLSXCMakeIncludeDir);

        module.Headers.Add("OpenXLSX-Exports.hpp");
        module.Headers.Add("OpenXLSX.hpp");
        module.Headers.Add("pugixml/pugixml.hpp");

        // foreach (var fileInfo in new DirectoryInfo(XLSXIncludeDir).GetFiles())
        // {
        //     module.Headers.Add(Path.GetFileName(fileInfo.FullName));
        // }

        module.Defines.Add("_WIN32");
        module.Defines.Add("CHARCONV_ENABLED");
        //module.Defines.Add("CMAKE_INTDIR=\"Release\"");
        module.Defines.Add("OpenXLSX_EXPORTS");

        //XLSX的cpp
        foreach (var fileInfo in new DirectoryInfo(XLSXSourceDir).GetFiles("*", SearchOption.AllDirectories))
        {
            var translationUnit = new TranslationUnit(fileInfo.FullName);
            translationUnit.Module = module;
            module.Units.Add(translationUnit);
        }

        foreach (var fileInfo in new DirectoryInfo(XLSXExternalDir).GetFiles("*", SearchOption.AllDirectories))
        {
            var translationUnit = new TranslationUnit(fileInfo.FullName);
            translationUnit.Module = module;
            module.Units.Add(translationUnit);
        }
    }

    public void SetupPasses(Driver driver)
    {
        driver.AddTranslationUnitPass(new DelegatesPass());
    }
}

static class Program
{
    static void Main()
    {
        
        ConsoleDriver.Run(new LibOpenXLSX());
    }
}