#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person_26 {
public:
	int m_a;//非静态成员变量，属于类的对象上
	static int m_b;//静态成员变量，不属于类的对象上
	void func() {}//非静态成员函数，不属于类的对象上
	static void func2() {}//静态成员函数，不属于类的对象上
};

int Person_26::m_b = 0;

void test01_26() 
{
	Person_26 p;
	//空对象占用内存空间为：1
	//c++编译器会给每个空对象分配一个字节的空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02_26()
{
	Person_26 p;
	//只有一个int成员的对象占用内存空间为：4
	//当加入一个静态成员变量后占用内存空间仍然是：4
	//当加入一个成员函数后占用的内存空间仍然是：4
	cout << "size of p = " << sizeof(p) << endl;
}

int main_26()
{
	//test01_26();
	test02_26();
	return 0;
}
