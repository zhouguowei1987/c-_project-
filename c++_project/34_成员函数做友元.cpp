#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Building_34;

class GoodGay_34 {
public:
	Building_34* building;
	void visit();//��visit�������Է���Building�е�˽�г�Ա
	void visit2();//��visit2���������Է���Building�е�˽�г�Ա
	GoodGay_34();
};

class Building_34 {
	//���߱�����GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void GoodGay_34::visit();
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
public:
	Building_34();
};

//����д��Ա����
Building_34::Building_34()
{
	m_sittingRoom = "����";
	m_bedRoom = "����";
}

GoodGay_34::GoodGay_34()
{
	building = new Building_34;
}

void GoodGay_34::visit()
{
	cout << "���ڷ��ʣ�" << building->m_sittingRoom << endl;
	cout << "���ڷ��ʣ�" << building->m_bedRoom << endl;
}

void GoodGay_34::visit2()
{
	cout << "���ڷ��ʣ�" << building->m_sittingRoom << endl;
	//cout << "���ڷ��ʣ�" << building->m_bedRoom << endl;
}

void test01_34()
{
	GoodGay_34 gg;
	gg.visit();
	gg.visit2();
}

int main_34()
{
	test01_34();
	return 0;
}
