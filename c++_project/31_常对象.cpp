#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//��������ǰ��const�ƸĶ���Ϊ������
//������ֻ�ܵ��ó�����

class Person_31 {
public:
	int m_a;
	mutable int m_b;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable

	Person_31(int a, int b) :m_a(a), m_b(b) {}

	//thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//this->m_a = 100;//�������������޸ĳ�Ա����
		this->m_b = 100;
	}

	void func() {}
};

void test01_31()
{
	const Person_31 p(10, 10);//�ڶ���ǰ��const����Ϊ������
	//p.m_a = 100;//����
	p.showPerson();
	p.m_b = 200;//m_b������ֵ��������Ҳ�����޸�
	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ���������޸�����

	cout << "m_a = " << p.m_a << endl;
	cout << "m_b = " << p.m_b << endl;

}

int main_31()
{
	test01_31();
	return 0;
}