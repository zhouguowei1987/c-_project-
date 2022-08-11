#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//当其他类对象作为本类成员，构造的时候先构造成员类对象，再构造自身（先部分后整体）
class Phone_23 {
public:
	string p_name;

	Phone_23(string name)
	{
		p_name = name;
	}
};

class Person_23 {
public:
	string m_name;
	Phone_23 m_phone;

	//初始化列表
	Person_23(string name, string pname) :m_name(name), m_phone(pname) {}
};

void test01_23()
{
	Person_23 p("张三", "华为");
	cout << p.m_name << p.m_phone.p_name<< endl;
}

int main_23()
{
	test01_23();
	return 0;
}