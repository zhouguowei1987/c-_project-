#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person_25 {
public:
	static int a;
	int b;
	static void func()
	{
		a = 100;
		//b = 200; //产生错误
		cout << "static void func 调用" << endl;
	}
};

int Person_25::a = 10;

void test01_25()
{
	Person_25 p;
	p.func();
	Person_25::func();
}

int main_25()
{
	test01_25();
	return 0;
}