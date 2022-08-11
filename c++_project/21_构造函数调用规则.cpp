#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//如果用户定义有参构造函数，c++不再提供默认无参构造，但会提供默认拷贝构造
//如果用户定义拷贝构造函数，c++不会再提供其他构造函数

//分别注释默认构造函数和除拷贝外的其他函数，发现编译器不会自动生成所需要的构造函数
class Person_21 {
public:
	int m_age;
public:
	Person_21()
	{
		m_age = 18;
		cout << "Person的无参构造函数调用" << endl;
	}

	Person_21(int a) {
		m_age = a;
		cout << "Person的有参构造函数调用" << endl;
	}

	Person_21(const Person_21& p) {
		m_age = p.m_age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person_21()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

void test01_21()
{
	Person_21 p;
	p.m_age = 18;

	Person_21 p2(p);
	Person_21 p3(15);

	cout << "p2 age" << p2.m_age << endl;
	cout << "p3 age" << p3.m_age << endl;
}

int main_21()
{
	test01_21();
	return 0;
}