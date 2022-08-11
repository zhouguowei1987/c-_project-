#include <iostream>

using namespace std;

const int* p = new int(100);
//发现引用，转化为const int* p = &a
void func_10(int& ref)
{
	ref = 100;//ref是引用，转换为 *ref = 100
}

int main_10()
{
	int a = 10;

	//自动转换为const int* ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
	int& ref = a;
	ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func_10(a);
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	return 0;
}