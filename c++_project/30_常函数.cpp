#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//��Ա�������const�����ǳ�Ϊ�������Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

class Person_30 {
public:
	int m_a;
	mutable int m_b;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable

	Person_30(int a, int b) :m_a(a), m_b(b) {}

	//thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//this->m_a = 100;//�������������޸ĳ�Ա����
		this->m_b = 100;
	}
};

void test01_30()
{
	Person_30 p(10,10);
	p.showPerson();
	cout << "m_a = " << p.m_a << endl;
	cout << "m_b = " << p.m_b << endl;
}

int main_30()
{
	test01_30();
	return 0;
}