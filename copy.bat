echo 拷贝到.net测试工程下
XCOPY /Y /F OpenXLSX\CmakeBuild\output\Release\OpenXLSX.dll  TestBinding\TestBinding\TestBinding\bin\x64\Release\net6.0\OpenXLSX.dll 

XCOPY /Y /F I:\__workSpace\_Github\OpenXLSX-Sharp\OpenXLSX\CmakeBuild\output\Release\OpenXLSX.dll  I:\__workSpace\_Github\OpenXLSX-Sharp\TestBinding\TestBinding\TestBinding\bin\x64\Debug\net6.0\OpenXLSX.dll 

echo 拷贝到unity下
xcopy /Y /S "ReleaseDir\*" "TestInUnity\ExcelReaderTest\Assets\Editor\Plugin\OpenXLSX-Sharp\"