#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//���ò��Ƕ���һ�����������Ǹ��Ѵ��ڱ���ȡһ��������
//����������Ϊ���ñ��������ڴ�ռ䣬���������õı�������һ���ڴ�ռ�

void TestRef()
{
	int a = 10;
	//1�������ڶ����Ǳ����ʼ��
	//int& ra;//����������ʱ�����
	
	//2��һ�����������ж������
	int& ra = a;
	int& rra = a;

	//3������һ������һ��ʵ�壬�ٲ�����������ʵ��
	
	printf("%p %p %p\n", &a,&ra,&rra);
}

void TestConstRef()
{
	const int a = 10;
	//int& ra = a;//��������ʱ�����aΪ����
	const int& ra = a;

	//int& b = 10;//��������ʱ�����bΪ����
	const int& b = 10;

	double d = 12.34;
	double& rrd = d;
	//int& rd = d;//��������ʱ��������Ͳ�ͬ
	//����ʱ�������ʽ����ת����Ҳ��������ǰ��const������ʱ���õĲ��Ǳ�������
	//������ʽ����ת��ʱ����ʱ�ռ�
	const int& rd = d;
}

//ע�⣺�������ͱ��������ʵ����ͬ�����͵�

//1��������
void Swap(int& a, int& b)
{
	//��Ϊ����ʹ�õ��Ǳ���ԭ�ռ䣬���Կ���ֱ�ӽ���
	int temp = a;
	a = b;
	b = temp;
}

//2��������ֵ
//���ڴ���ջ�еĵ�ַ���ں���������ػ�������ϵͳ����������������ֵʱ��������ջ�еĵ�ַ
int& Add(int a, int b)
{
	//�����c�Ǿֲ�����������������ֵ�����ص���c�ı�������c�Ѿ����ػ�������ϵͳ�ˡ�
	int c = a + b;
	return c;
}

int main_38()
{
	TestRef();
	int& ret = Add(1, 2);
	cout << "Add(1,2) is :" << ret << endl;
	int& ret1 = Add(3, 4);
	cout << "Add(3,4) is :" << ret1 << endl;
	return 0;
}