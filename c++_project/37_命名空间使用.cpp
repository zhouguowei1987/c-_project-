#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

namespace N
{
	//�������ռ��ж���ĳ�Ա������ȫ�ֵģ����ھ�̬��
	//�����ռ��б������Գ�ʼ���������ܸ�ֵ
	//int a;//�������a��δ��ʼ��
	//a = 10;//�����������ռ��и�ֵ

	int a = 10;
	int b = 20;

	int Add(int x, int y)
	{
		return x + y;
	}
	int Sub(int x, int y)
	{
		return x - y;
	}
}

int main_37()
{
	//printf("%d\n", a);//������������޷�ʶ�����a

	//����1���������ռ����Ƽ��������޶�����::�����ȫ����ʹ��ʱ��̫���㣩
	//printf("%d\n", N::a);

	//����2��ʹ��using�������ռ��еĳ�Ա���루չ�������ռ��г��õĳ�Ա��
	//using N::a;
	//printf("%d\n", a);

	//����3��ʹ��using namespace N �����ռ��������루���ɿ�������Ŀ�в���ʹ�ø÷�����
	using namespace N;
	printf("%d\n", a);

	return 0;
}