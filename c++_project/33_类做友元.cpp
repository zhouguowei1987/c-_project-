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
	//GoodGay类是此类的好朋友，可以访问私有成员
	friend class GoodGay_33;
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
public:
	Building_33();
};

//类外写成员函数
Building_33::Building_33()
{
	m_sittingRoom = "客厅";
	m_bedRoom = "卧室";
}

GoodGay_33::GoodGay_33()
{
	building = new Building_33;
}

void GoodGay_33::visit()
{
	cout << "正在访问：" << building->m_sittingRoom << endl;
	cout << "正在访问：" << building->m_bedRoom << endl;
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