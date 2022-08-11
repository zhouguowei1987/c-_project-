#include <iostream>

using namespace std;

// class 类名 {访问权限:属性/行为};

const double PI_15 = 3.14;

//创建一个对象的类
class Circle_15
{
public://访问权限  公共的权限
	int m_r_15;//半径

	//行为，获取圆的周长
	double calculateZC_15() {
		return 2 * PI_15 * m_r_15;
	}
};

int main_15()
{
	Circle_15 c1;
	c1.m_r_15 = 10;
	cout << "圆的周长为:" << c1.calculateZC_15() << endl;
	return 0;
}