#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//�ڱ���׶η����ڴ�
//�������������ʼ��

class Person_24 {
public:
	static int a;
};

int Person_24::a = 100;

void test01_24()
{
	Person_24 p;
	cout << p.a << endl;
	cout << Person_24::a << endl;

	Person_24 p1;
	cout << p1.a << endl;

	p1.a = 200;
	cout << p.a << endl;
	cout << p1.a << endl;
	cout << Person_24::a << endl;
}

int main_24()
{
	test01_24();
	return 0;
}