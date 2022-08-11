#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//声明对象前加const称改对象为常对象
//常对象只能调用常函数

class Person_31 {
public:
	int m_a;
	mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable

	Person_31(int a, int b) :m_a(a), m_b(b) {}

	//this指针的本质，是指针常量，指针的指向是不可以修改的
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const
	{
		//this->m_a = 100;//常函数不可以修改成员属性
		this->m_b = 100;
	}

	void func() {}
};

void test01_31()
{
	const Person_31 p(10, 10);//在对象前加const，变为常对象
	//p.m_a = 100;//报错
	p.showPerson();
	p.m_b = 200;//m_b是特殊值，常对象也可以修改
	//p.func();//常对象不可以调用普通成员函数，因为普通函数可以修改属性

	cout << "m_a = " << p.m_a << endl;
	cout << "m_b = " << p.m_b << endl;

}

int main_31()
{
	test01_31();
	return 0;
}