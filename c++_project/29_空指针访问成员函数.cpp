#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person_29 {
public:
	int m_age;
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//����ԭ������Ϊ�����ָ��ΪNULL
		//����
		/*if (this == NULL)
		{
			return;
		}*/
		cout << "age = " << m_age << endl;
	}
};

void test01_29()
{
	Person_29* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main_29()
{
	test01_29();
	return 0;
}