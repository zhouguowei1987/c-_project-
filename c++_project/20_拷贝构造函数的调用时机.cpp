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
		cout << "Person���޲ι��캯������" << endl;
	}

	Person_20(int a) {
		m_age = a;
		cout << "Person���вι��캯������" << endl;
	}

	Person_20(const Person_20& p) {
		m_age = p.m_age;
		cout << "Person�Ŀ������캯������" << endl;
	}
};

//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01_20() 
{
	Person_20 p1(10);
	Person_20 p2(p1);
}

//ֵ���ݵķ�ʽ������������ֵ
void doWork_20(Person_20 p)
{

}

void test02_20()
{
	Person_20 p;
	doWork_20(p);//ֵ��������˿���
}

//��ֵ��ʽ���ؾֲ�����
Person_20 doWork2_20()
{
	Person_20 p1;
	return p1;//return����˿���
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
