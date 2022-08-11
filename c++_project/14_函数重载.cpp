#include <iostream>

using namespace std;

//同一个作用域下，函数名相同，参数类型不同，或者个数不同，或者顺序不同
void func_14()
{
	cout << "func_14的调用" << endl;
}

void func_14(int a)
{
	cout << "func_14(int a)的调用" << endl;
}

void func_14(double a)
{
	cout << "func_14(double a)的调用" << endl;
}

void func_14(int a, double b)
{
	cout << "func_14(int a, double b)的调用" << endl;
}

int main_14()
{
	int a = 10;
	double b = 20.5;
	func_14();
	func_14(a);
	func_14(b);
	func_14(a, b);
	return 0;
}