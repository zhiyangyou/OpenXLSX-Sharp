# OpenXLSX-Sharp
C# binding library for [OpenXLSX](https://github.com/troldal/OpenXLSX)



## 为什么

[NPOI](https://github.com/nissl-lab/npoi) 和 [EPPlus](https://github.com/JanKallman/EPPlus/releases/tag/v4.5.3)（免费版本）加载配置表有一点慢，几百几千行数据的加载需要几百ms甚至秒级别的速度



## 怎么做

- 使用CppSharp生成OpenXLSX的绑定代码（需要做一些调整） **（done）**
- 编译OpenXLSX，导出动态库（dll）**（done）**
- 使用CppSharp运行时，为CLR导入dll符号。**（done）**
- 编写一些OpenXLSX在C#和C++两侧的一些适配代码 **（done）**



## 怎么用

1. C#工程依赖的文件在[ReleaseDir文件夹](https://github.com/zhiyangyou/OpenXLSX-Sharp/tree/main/ReleaseDir)下，拷贝这些文件到C#工程中
2. 这是demo代码



## 注意

- OpenXLSX的cell随机读写的效率也不高，最高效的方式是使用迭代器顺序遍历cell格子（连续读写）。 OpenXLSX随机读写的效率不高和xml解析库定义的数据结构有关系（[链式结构](https://github.com/troldal/OpenXLSX/blob/master/OpenXLSX/sources/utilities/XLUtilities.hpp#L47)）如图： <img src="docImages\RandomAccessByWhileLoop.png" style="zoom:30%;" />
- 尽量不使用CppSharp为OpenXLSX生成的绑定代码，如果要使用，注意CppSharp生成的一些API的调用会在C#的非托管堆上构造C#对象，比如 XLCell XLWorksheet::cell 这个函数如果在C#侧被调用，注意使用using var cell = sheet.cell();让编译器生成Dispose的调用，否则内存泄露。 
  - CppSharp默认规则生成的代码是这样的。解决办法是，定制生成规则，给C#的绑定类型生成析构函数，在析构中自动调用Dispose。
- C++侧的异常没有处理，所以软件鲁棒性比较烂。



## 最佳性能实践

核心思想是：

- 缓存友好
- 规避多次内存寻址



#### 操作步骤

1. 在C++侧使用迭代器顺序读取cell的数据（顺序迭代规避了链表随机访问延迟高的问题）
2. 将数据放在一块连续中，字符串的u8转宽字符也是在C++侧完成
3. 回调C#侧传过来的函数指针，通过参数将数据指针传递给C#侧
4. 因为C#和C++测的使用内存布局相同的结构体，数据的拷贝使用memcpy，可以很快完成跨语言的数据传递、规避封送（Marshalling）的消耗







