#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//����û������вι��캯����c++�����ṩĬ���޲ι��죬�����ṩĬ�Ͽ�������
//����û����忽�����캯����c++�������ṩ�������캯��

//�ֱ�ע��Ĭ�Ϲ��캯���ͳ���������������������ֱ����������Զ���������Ҫ�Ĺ��캯��
class Person_21 {
public:
	int m_age;
public:
	Person_21()
	{
		m_age = 18;
		cout << "Person���޲ι��캯������" << endl;
	}

	Person_21(int a) {
		m_age = a;
		cout << "Person���вι��캯������" << endl;
	}

	Person_21(const Person_21& p) {
		m_age = p.m_age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person_21()
	{
		cout << "Person��������������" << endl;
	}
};

void test01_21()
{
	Person_21 p;
	p.m_age = 18;

	Person_21 p2(p);
	Person_21 p3(15);

	cout << "p2 age" << p2.m_age << endl;
	cout << "p3 age" << p3.m_age << endl;
}

int main_21()
{
	test01_21();
	return 0;
}