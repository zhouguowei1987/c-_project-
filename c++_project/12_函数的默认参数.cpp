#include <iostream>

using namespace std;

//返回值类型 函数名(参数=默认值){}
int func_12(int a, int b = 10)
{
	return a + b;
}

//1、如果某个位置已经有了默认参数，那么从这个位置往后都必须有默认值
//int func2_12(int a = 10, int b)
//{
//	return a + b;
//}

//2、如果函数声明中有默认参数，函数实现就不能有默认参数
//出现二义性导致错误
int func3_12(int a = 10, int b = 10);
//int func3_12(int a = 10, int b = 10)
//{
//	return a + b;
//}
int func3_12(int a, int b)
{
	return a + b;
}

int main_12()
{
	int c = func3_12(10, 20);
	cout << "c = " << c << endl;
	return 0;
}