#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Building_32 {
	//goodGay全局函数是Building好朋友，可以访问Building中的私有成员
	friend void goodGay_32(Building_32* building);
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
public:
	Building_32()
	{
		m_sittingRoom = "客厅";
		m_bedRoom = "卧室";
	}
};

//全局函数
void goodGay_32(Building_32* building)
{
	cout << "goodGay访问：" << building->m_sittingRoom << endl;
	cout << "goodGay访问：" << building->m_bedRoom << endl;
}

void test01_32()
{
	Building_32 building;
	goodGay_32(&building);
}

int main_32()
{
	test01_32();
	return 0;
}