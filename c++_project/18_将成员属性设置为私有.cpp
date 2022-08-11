#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

//优点1、将成员属性设置为私有，可以自己控制读写权限
//优点2、对于权限，我们可以检测数据的有效性

class Person_18
{
private:
	//可读可写
	string m_name;
	//只读
	int m_age;
	//只写
	string m_lover;
public:
	void setname(string name)
	{
		m_name = name;
	}

	string getname()
	{
		return m_name;
	}

	int getage()
	{
		m_age = 0;
		return m_age;
	}

	void setlover(string lover)
	{
		m_lover = lover;
	}
};

int main_18()
{
	Person_18 p1;
	p1.setname("张三");
	p1.setlover("李四");
	cout << "姓名是：" << p1.getname() << endl;
	cout << "年龄是：" << p1.getage() << endl;
	return 0;
}