#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person_26 {
public:
	int m_a;//�Ǿ�̬��Ա������������Ķ�����
	static int m_b;//��̬��Ա��������������Ķ�����
	void func() {}//�Ǿ�̬��Ա��������������Ķ�����
	static void func2() {}//��̬��Ա��������������Ķ�����
};

int Person_26::m_b = 0;

void test01_26() 
{
	Person_26 p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//c++���������ÿ���ն������һ���ֽڵĿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02_26()
{
	Person_26 p;
	//ֻ��һ��int��Ա�Ķ���ռ���ڴ�ռ�Ϊ��4
	//������һ����̬��Ա������ռ���ڴ�ռ���Ȼ�ǣ�4
	//������һ����Ա������ռ�õ��ڴ�ռ���Ȼ�ǣ�4
	cout << "size of p = " << sizeof(p) << endl;
}

int main_26()
{
	//test01_26();
	test02_26();
	return 0;
}
