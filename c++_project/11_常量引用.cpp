#include <iostream>

using namespace std;

//����ʹ�õĳ�����ͨ�����������β�
void showValue_11(const int& v)
{
	cout << v << endl;
}

int main_11()
{
	//int& ref = 10;//�������ñ�����Ҫһ���Ϸ����ڴ�ռ�
	//����const�Ϳ����ˣ��������Ż����룬int temp = 10; const int& ref = temp;��ע��ḽ��const���ԣ�
	const int& ref = 10;

	//ref = 100;//����const�󲻿��޸ı���
	cout << ref << endl;

	//���������ó������÷�ֹ������޸�ʵ��
	int a = 10;
	showValue_11(a);
	return 0;

}