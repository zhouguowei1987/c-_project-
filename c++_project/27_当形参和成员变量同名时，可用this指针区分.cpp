#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person_27 {
public:
	int age;
	Person_27(int age)
	{
		//age = age;//���ֻ���
		//thisָ��ָ�򱻵��õĳ�Ա�����������Ķ���
		this->age = age;
	}
};


void test01_27()
{
	Person_27 p1(18);
	cout << "p1���䣺" << p1.age << endl;
}

int main_27()
{
	test01_27();
	return 0;
}