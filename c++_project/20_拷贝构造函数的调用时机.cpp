#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person_20 {
private:
	int m_age;
public:
	Person_20()
	{
		m_age = 18;
		cout << "Person的无参构造函数调用" << endl;
	}

	Person_20(int a) {
		m_age = a;
		cout << "Person的有参构造函数调用" << endl;
	}

	Person_20(const Person_20& p) {
		m_age = p.m_age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
};

//使用一个已经创建完毕的对象来初始化一个新对象
void test01_20() 
{
	Person_20 p1(10);
	Person_20 p2(p1);
}

//值传递的方式给函数参数传值
void doWork_20(Person_20 p)
{

}

void test02_20()
{
	Person_20 p;
	doWork_20(p);//值传递完成了拷贝
}

//以值方式返回局部对象
Person_20 doWork2_20()
{
	Person_20 p1;
	return p1;//return完成了拷贝
}

void test03_20()
{
	Person_20 p = doWork2_20();
}

int main_20()
{
	test01_20();
	test02_20();
	test03_20();
	return 0;
}
