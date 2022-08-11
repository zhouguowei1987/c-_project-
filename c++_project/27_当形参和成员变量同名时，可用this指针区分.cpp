#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person_27 {
public:
	int age;
	Person_27(int age)
	{
		//age = age;//出现混乱
		//this指针指向被调用的成员函数，所属的对象
		this->age = age;
	}
};


void test01_27()
{
	Person_27 p1(18);
	cout << "p1年龄：" << p1.age << endl;
}

int main_27()
{
	test01_27();
	return 0;
}