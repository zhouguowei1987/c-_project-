#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//构造函数():属性1(值1),属性2(值2),属性3(值3)...{}

class Person_22
{
public:
	int m_a, m_b, m_c;

	//传统方法
	/*Person_22(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}*/

	//初始化列表
	Person_22(int a, int b, int c) :m_a(a), m_b(b), m_c(c) {}
};

void test01_22()
{
	Person_22 p(10, 20, 30);
	cout << "m_a = " << p.m_a << endl;
	cout << "m_b = " << p.m_b << endl;
	cout << "m_c = " << p.m_c << endl;
}

int main_22()
{
	test01_22();
	return 0;
}