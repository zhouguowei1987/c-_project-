#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

//构造函数：主要作用在于创建对象时对象的成员属性赋值，构造函数由编译器自动调用，无需手动
	//1、构造函数，没有返回值也不写void
	//2、函数名称与类名相同
	//3、构造函数可以有参数，因此可以发生重载
	//4、程序在创建对象时自动调用构造，无需手动，而且只会调用一次
	

//析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作
	//1、析构函数，没有返回值也不写void
	//2、函数名称与类名相同，在名称前加上符号~
	//3、析构函数不可以有参数，因此不可以发生重载
	//4、程序在对象销毁前自动调用析构，无需手动调用，而且只会调用一次


class Person_19 {
private:
	int m_age;
public:
	Person_19()
	{
		m_age = 18;
		cout << "Person的无参构造函数调用" << endl;
	}

	Person_19(int a) {
		m_age = a;
		cout << "Person的有参构造函数调用" << endl;
	}

	Person_19(const Person_19& p) {
		m_age = p.m_age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
};

int main_19()
{
	//调用构造函数
	//1、括号法
	Person_19 p1; //无参
	Person_19 p2(10);//有参
	Person_19 p3(p2);//拷贝 Person_19 temp =  p2; const Person_19& p3 = temp;

	//2、显示法
	Person_19 p4;//无参
	Person_19 p5 = Person_19(10);//有参
	Person_19 p6 = Person_19(p5);//拷贝

	Person_19(10);//匿名对象；当前执行结束后，系统会立即回收掉匿名对象

	//3、隐式转换法
	Person_19 p7 = 10;//有参 Person_19 p4 = Person_19(10);
	Person_19 p8 = p7;//拷贝
	return 0;
}
