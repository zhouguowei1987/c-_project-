#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Building_33;

class GoodGay_33 {
public:
	Building_33* building;
	void visit();
	GoodGay_33();
};

class Building_33 {
	//GoodGay���Ǵ���ĺ����ѣ����Է���˽�г�Ա
	friend class GoodGay_33;
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
public:
	Building_33();
};

//����д��Ա����
Building_33::Building_33()
{
	m_sittingRoom = "����";
	m_bedRoom = "����";
}

GoodGay_33::GoodGay_33()
{
	building = new Building_33;
}

void GoodGay_33::visit()
{
	cout << "���ڷ��ʣ�" << building->m_sittingRoom << endl;
	cout << "���ڷ��ʣ�" << building->m_bedRoom << endl;
}

void test01_33()
{
	GoodGay_33 gg;
	gg.visit();
}

int main_33()
{
	test01_33();
	return 0;
}