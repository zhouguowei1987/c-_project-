#include <iostream>

using namespace std;

//����ռλ������ռλ����Ҳ������Ĭ�ϲ���
void func_13(int a, int b = 10)
{
	cout << "this is func_13" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main_13()
{
	func_13(20);//ռλ���������
	return 0;
}