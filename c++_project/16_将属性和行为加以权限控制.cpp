#include <iostream>
#include <cstring>

using namespace std;

//三种权限
//公共权限 public 类内可以访问，类外可以访问
//保护权限 protected 类内可以访问，类外不可以访问，儿子可以访问父亲中的保护内容
//私有权限 private 类内可以访问，类外不可以访问，儿子不可以访问父亲中的私有内容

class Person_16
{
public:
	string m_name;
	void func_16()
	{
		m_name = "张三";
		m_car = "摩托";
		m_password = 123456;
	}
protected:
	string m_car;
private:
	int m_password;
};
int main_16()
{
	Person_16 p1;
	p1.m_name = "李四";
	//p1.m_car = "汽车";//错误，不可访问
	//p1.m_password = 654321;//错误，不可访问
	return 0;
}