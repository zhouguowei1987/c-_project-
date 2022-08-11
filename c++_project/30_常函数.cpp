#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//成员函数后加const后我们称为这个函数为常函数
//常函数内不可以修改成员属性
//成员属性声明时加关键字mutable，在常函数中依然可以修改

class Person_30 {
public:
	int m_a;
	mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable

	Person_30(int a, int b) :m_a(a), m_b(b) {}

	//this指针的本质，是指针常量，指针的指向是不可以修改的
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const
	{
		//this->m_a = 100;//常函数不可以修改成员属性
		this->m_b = 100;
	}
};

void test01_30()
{
	Person_30 p(10,10);
	p.showPerson();
	cout << "m_a = " << p.m_a << endl;
	cout << "m_b = " << p.m_b << endl;
}

int main_30()
{
	test01_30();
	return 0;
}