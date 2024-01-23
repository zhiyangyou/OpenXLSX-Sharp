# OpenXLSX-Sharp
C# binding library for OpenXLSX



## 为什么要做？

- NPOI 和 EPPlus 在.netCore平台读写excel实在是太慢了，Unity的Mono平台还要再慢一倍多。
- 一个 row=240 col = 12的excel文件，在Unity中读取出来需要将近900ms， 使用OpenXLSX只需要33ms
- 故尝试，将OpenXLSX绑定到C#层，以获得性能提升

## 怎么做？

- 使用CppSharp生成OpenXLSX的绑定代码（需要做一些调整） **（done）**
- 编译OpenXLSX，导出动态库（dll）**（done）**
- 使用CppSharp运行时，为CLR导入dll符号。**（done）**
- 编写一些OpenXLSX在C#和C++两侧的一些适配代码 **（TODO 2024年1月24日00:19:00）**
