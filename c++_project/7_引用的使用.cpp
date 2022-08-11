#include <iostream>

using namespace std;

int main_7()
{
	int a = 10;
	//使用引用
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	a = 200;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}