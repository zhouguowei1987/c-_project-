#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//�������������Ϊ�����Ա�������ʱ���ȹ����Ա������ٹ��������Ȳ��ֺ����壩
class Phone_23 {
public:
	string p_name;

	Phone_23(string name)
	{
		p_name = name;
	}
};

class Person_23 {
public:
	string m_name;
	Phone_23 m_phone;

	//��ʼ���б�
	Person_23(string name, string pname) :m_name(name), m_phone(pname) {}
};

void test01_23()
{
	Person_23 p("����", "��Ϊ");
	cout << p.m_name << p.m_phone.p_name<< endl;
}

int main_23()
{
	test01_23();
	return 0;
}