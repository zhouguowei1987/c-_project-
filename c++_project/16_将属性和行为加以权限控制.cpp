#include <iostream>
#include <cstring>

using namespace std;

//����Ȩ��
//����Ȩ�� public ���ڿ��Է��ʣ�������Է���
//����Ȩ�� protected ���ڿ��Է��ʣ����ⲻ���Է��ʣ����ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private ���ڿ��Է��ʣ����ⲻ���Է��ʣ����Ӳ����Է��ʸ����е�˽������

class Person_16
{
public:
	string m_name;
	void func_16()
	{
		m_name = "����";
		m_car = "Ħ��";
		m_password = 123456;
	}
protected:
	string m_car;
private:
	int m_password;
};
int main_16()
{
	Person_16 p1;
	p1.m_name = "����";
	//p1.m_car = "����";//���󣬲��ɷ���
	//p1.m_password = 654321;//���󣬲��ɷ���
	return 0;
}