#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Building_32 {
	//goodGayȫ�ֺ�����Building�����ѣ����Է���Building�е�˽�г�Ա
	friend void goodGay_32(Building_32* building);
public:
	string m_sittingRoom;
private:
	string m_bedRoom;
public:
	Building_32()
	{
		m_sittingRoom = "����";
		m_bedRoom = "����";
	}
};

//ȫ�ֺ���
void goodGay_32(Building_32* building)
{
	cout << "goodGay���ʣ�" << building->m_sittingRoom << endl;
	cout << "goodGay���ʣ�" << building->m_bedRoom << endl;
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