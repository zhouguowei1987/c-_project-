#include <iostream>

using namespace std;

const int* p = new int(100);
//�������ã�ת��Ϊconst int* p = &a
void func_10(int& ref)
{
	ref = 100;//ref�����ã�ת��Ϊ *ref = 100
}

int main_10()
{
	int a = 10;

	//�Զ�ת��Ϊconst int* ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func_10(a);
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	return 0;
}