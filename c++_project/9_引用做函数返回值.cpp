#include <iostream>

using namespace std;

//引用做函数的返回值
//1、不要返回局部变量引用
int& test01_9()
{
	int a = 10;//a为局部变量（栈区）
	return a;
}

//2、函数的调用可以作为左值
int& test02_9()
{
	static int a = 20;//a为静态变量（全局区）
	return a;
}

int& test03_9()
{
	int* a = new int(10);
	return *a;
}

int main_9()
{
	int& ref = test01_9();
	cout << "ref " << ref << endl;
	cout << "ref " << ref << endl;

	int& ref2 = test02_9();
	cout << "ref2 " << ref2 << endl;
	cout << "ref2 " << ref2 << endl;

	//如果函数的返回值是引用，这个函数调用可以做左值
	test02_9() = 1000;//a = 1000
	cout << "ref2 " << ref2 << endl;
	cout << "ref2 " << ref2 << endl;

	int& ref3 = test03_9();
	cout << "ref3 " << ref3 << endl;
	cout << "ref3 " << ref3 << endl;
	delete &ref3;
	cout << "ref3 " << ref3 << endl;

	return 0;
}