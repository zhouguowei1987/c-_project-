#include <iostream>

using namespace std;

int* func_6()
{
	int* p = new int(10);
	return p;
}

void test02_6()
{
	//创建10个整型数据的数组，在堆区
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	//首地址
	cout << arr << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  " << &arr[i] << endl;
	}

	//释放内存
	delete[] arr;
}

int main_6()
{
	int* p = func_6();
	cout << *p << endl;

	//释放内存使用delete
	delete p;

	test02_6();

	return 0;
}