#include <iostream>

using namespace std;

//�����������ķ���ֵ
//1����Ҫ���ؾֲ���������
int& test01_9()
{
	int a = 10;//aΪ�ֲ�������ջ����
	return a;
}

//2�������ĵ��ÿ�����Ϊ��ֵ
int& test02_9()
{
	static int a = 20;//aΪ��̬������ȫ������
	return a;
}

int& test03_9()
{
	int* a = new int(10);
	return *a;
}

int main_9()
{
	int& ref = test01_9();
	cout << "ref " << ref << endl;
	cout << "ref " << ref << endl;

	int& ref2 = test02_9();
	cout << "ref2 " << ref2 << endl;
	cout << "ref2 " << ref2 << endl;

	//��������ķ���ֵ�����ã�����������ÿ�������ֵ
	test02_9() = 1000;//a = 1000
	cout << "ref2 " << ref2 << endl;
	cout << "ref2 " << ref2 << endl;

	int& ref3 = test03_9();
	cout << "ref3 " << ref3 << endl;
	cout << "ref3 " << ref3 << endl;
	delete &ref3;
	cout << "ref3 " << ref3 << endl;

	return 0;
}