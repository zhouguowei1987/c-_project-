#include <iostream>

using namespace std;

//����ֵ���� ������(����=Ĭ��ֵ){}
int func_12(int a, int b = 10)
{
	return a + b;
}

//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󶼱�����Ĭ��ֵ
//int func2_12(int a = 10, int b)
//{
//	return a + b;
//}

//2�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//���ֶ����Ե��´���
int func3_12(int a = 10, int b = 10);
//int func3_12(int a = 10, int b = 10)
//{
//	return a + b;
//}
int func3_12(int a, int b)
{
	return a + b;
}

int main_12()
{
	int c = func3_12(10, 20);
	cout << "c = " << c << endl;
	return 0;
}