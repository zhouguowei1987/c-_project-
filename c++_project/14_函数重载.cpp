#include <iostream>

using namespace std;

//ͬһ���������£���������ͬ���������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
void func_14()
{
	cout << "func_14�ĵ���" << endl;
}

void func_14(int a)
{
	cout << "func_14(int a)�ĵ���" << endl;
}

void func_14(double a)
{
	cout << "func_14(double a)�ĵ���" << endl;
}

void func_14(int a, double b)
{
	cout << "func_14(int a, double b)�ĵ���" << endl;
}

int main_14()
{
	int a = 10;
	double b = 20.5;
	func_14();
	func_14(a);
	func_14(b);
	func_14(a, b);
	return 0;
}