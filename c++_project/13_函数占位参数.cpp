#include <iostream>

using namespace std;

//函数占位参数，占位参数也可以有默认参数
void func_13(int a, int b = 10)
{
	cout << "this is func_13" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main_13()
{
	func_13(20);//占位参数必须填补
	return 0;
}