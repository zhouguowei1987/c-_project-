#include <iostream>

using namespace std;

// class ���� {����Ȩ��:����/��Ϊ};

const double PI_15 = 3.14;

//����һ���������
class Circle_15
{
public://����Ȩ��  ������Ȩ��
	int m_r_15;//�뾶

	//��Ϊ����ȡԲ���ܳ�
	double calculateZC_15() {
		return 2 * PI_15 * m_r_15;
	}
};

int main_15()
{
	Circle_15 c1;
	c1.m_r_15 = 10;
	cout << "Բ���ܳ�Ϊ:" << c1.calculateZC_15() << endl;
	return 0;
}