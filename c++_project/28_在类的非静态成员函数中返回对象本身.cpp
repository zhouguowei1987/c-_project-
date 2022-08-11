#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person_28 {
public:
	int age;
	Person_28(int age)
	{
		this->age = age;
	}

	//加&原因：加&后才代表是对象本体
	Person_28& PersonaddPerson(Person_28& a)
	{
		this->age += a.age;
		a.age += this->age;
		return *this;
	}
};

void test01_28()
{
	Person_28 p1(10), p2(10);
	//p1 = 10; p2 = 10;
	//p1 = 30; p2 = 20;
	//p1 = 80; p2 = 50;
	p2.PersonaddPerson(p1).PersonaddPerson(p1);
	cout << p2.age << endl;//50
	cout << p1.age << endl;//80
}

int main_28()
{
	test01_28();
	return 0;
}