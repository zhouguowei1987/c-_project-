#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//以inline修饰的函数叫做内联函数，编译时c++编译器会在调用内联函数的地方展开
//没有函数压栈的开销，内敛函数提升程序运行的效率
//如果不是内联函数，使用时会有调用函数的操作


//1、inline是一种以空间换时间的做法，省去调用函数额开销。所以代码很长或者有循环/递归的函数不适宜使用作为内联函数
//2、inline对于编译器而言只是一个建议，编译器会自动优化，如果定义为inline的函数体内有循环/递归等等，编译器优化时会忽略掉内联
//3、inline不建议声明和定义分离，分离会导致链接错误。因为inline被展开，就没有函数地址了，链接就会找不到
//4、频繁使用的小函数，可以定义成内联函数

inline int Add_40(int left, int right)
{
	return left + right;
}


int main_40()
{
	int ret = Add_40(1, 2);
	return 0;
}

