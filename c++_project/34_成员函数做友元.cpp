#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Building_34;

class GoodGay_34 {
public:
	Building_34* building;
	void visit();//让visit函数可以访问Building中的私有成员
	void visit2();//让visit2函数不可以访问Building中的私有成员
	GoodGay_34();
};

class Building_34 {
	//告诉编译器GoodGay类下的visit成员函数作为此类的好朋友，可以访问私有成员
	friend void GoodGay_34::visit();
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
public:
	Building_34();
};

//类外写成员函数
Building_34::Building_34()
{
	m_sittingRoom = "客厅";
	m_bedRoom = "卧室";
}

GoodGay_34::GoodGay_34()
{
	building = new Building_34;
}

void GoodGay_34::visit()
{
	cout << "正在访问：" << building->m_sittingRoom << endl;
	cout << "正在访问：" << building->m_bedRoom << endl;
}

void GoodGay_34::visit2()
{
	cout << "正在访问：" << building->m_sittingRoom << endl;
	//cout << "正在访问：" << building->m_bedRoom << endl;
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
