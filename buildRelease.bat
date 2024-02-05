@echo off
chcp 65001
setlocal enabledelayedexpansion

rem 设定当前 bat 执行的工作目录为 curDir 变量
set "curDir=%~dp0"

rem 调用 Visual Studio 2022 打开解决方案并编译
set "slnFile=!curDir!OpenXLSX\CmakeBuild\OpenXLSX.sln"
echo !slnFile!
"C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\devenv.exe"   !slnFile!  /build  "RelWithDebInfo|x64"  /project OpenXLSX   
"C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\devenv.exe"   !slnFile!  /build  "RelWithDebInfo|x64"  /project OpenXLSX   

rem 构造源文件路径
set "dllDir=!curDir!OpenXLSX\CmakeBuild\output\RelWithDebInfo"
set "csFileDir=!curDir!GenBinding\CSCode"
set "cppSharpDllDir=!curDir!TestBinding\TestBinding\TestBinding"

set "dllFile=!dllDir!\OpenXLSX.dll"
set "pdbFile=!dllDir!\OpenXLSX.pdb"
set "OpenXLSXCSFile=!csFileDir!\OpenXLSX.cs"
set "StdCSFile=!csFileDir!\Std.cs" 
set "CppSharpRuntimeFile=!cppSharpDllDir!\CppSharp.Runtime.dll" 
set "CppSharpStd=!cppSharpDllDir!\Std-symbols.dll" 
set "Wrapper=!cppSharpDllDir!\OpenXLSXWrapper.cs" 

rem 构造目标文件路径
set "targetDir=!curDir!ReleaseDir"
set "dllFileCopy=!targetDir!\OpenXLSX.dll"
set "pdbFileCopy=!targetDir!\OpenXLSX.pdb"
set "OpenXLSXCSFileCopy=!targetDir!\OpenXLSX.cs"
set "StdCSFileCopy=!targetDir!\Std.cs"
set "CppSharpRuntimeFileCopy=!targetDir!\CppSharp.Runtime.dll" 
set "CppSharpStdCopy=!targetDir!\Std-symbols.dll" 
set "WrapperCopy=!targetDir!\\OpenXLSXWrapper.cs" 

rem 如果目标文件夹不存在，则创建
if not exist "!targetDir!" mkdir "!targetDir!"

rem 拷贝文件，覆盖已存在的文件
copy /y "!dllFile!" "!dllFileCopy!"
copy /y "!pdbFile!" "!pdbFileCopy!"
copy /y "!OpenXLSXCSFile!" "!OpenXLSXCSFileCopy!"
copy /y "!StdCSFile!" "!StdCSFileCopy!"
copy /y "!CppSharpRuntimeFile!" "!CppSharpRuntimeFileCopy!"
copy /y "!CppSharpStd!" "!CppSharpStdCopy!"
copy /y "!Wrapper!" "!WrapperCopy!"

echo 文件拷贝完成
