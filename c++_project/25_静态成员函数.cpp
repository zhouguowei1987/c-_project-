#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person_25 {
public:
	static int a;
	int b;
	static void func()
	{
		a = 100;
		//b = 200; //��������
		cout << "static void func ����" << endl;
	}
};

int Person_25::a = 10;

void test01_25()
{
	Person_25 p;
	p.func();
	Person_25::func();
}

int main_25()
{
	test01_25();
	return 0;
}