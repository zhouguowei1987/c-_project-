#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

//�ŵ�1������Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2������Ȩ�ޣ����ǿ��Լ�����ݵ���Ч��

class Person_18
{
private:
	//�ɶ���д
	string m_name;
	//ֻ��
	int m_age;
	//ֻд
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
	p1.setname("����");
	p1.setlover("����");
	cout << "�����ǣ�" << p1.getname() << endl;
	cout << "�����ǣ�" << p1.getage() << endl;
	return 0;
}