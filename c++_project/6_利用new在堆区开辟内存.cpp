#include <iostream>

using namespace std;

int* func_6()
{
	int* p = new int(10);
	return p;
}

void test02_6()
{
	//����10���������ݵ����飬�ڶ���
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	//�׵�ַ
	cout << arr << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  " << &arr[i] << endl;
	}

	//�ͷ��ڴ�
	delete[] arr;
}

int main_6()
{
	int* p = func_6();
	cout << *p << endl;

	//�ͷ��ڴ�ʹ��delete
	delete p;

	test02_6();

	return 0;
}