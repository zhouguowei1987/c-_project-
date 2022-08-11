#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//1、普通的命名空间
namespace N1 //N1为命名空间的名称
{
	//命名空间中的内容，既可以定义变量，也可以定义函数
	int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}

//2、命名空间可以嵌套
namespace N2
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N3
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}
	}
}

//3、同一个工程中允许存在多个相同名称的命名空间，编译器最后会合成同一个命名空间中
namespace N1
{
	int Mul(int left, int right)
	{
		return left * right;
	}
}

//一个命名空间就定义了一个新的作用域，命名空间中的所有内容都局限于该命名空间中。