#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//引用不是定义一个变量，而是给已存在变量取一个别名，
//编译器不会为引用变量开辟内存空间，它和它引用的变量共用一块内存空间

void TestRef()
{
	int a = 10;
	//1、引用在定义是必须初始化
	//int& ra;//该条语句编译时会出错
	
	//2、一个变量可以有多个引用
	int& ra = a;
	int& rra = a;

	//3、引用一旦引用一个实体，再不能引用其他实体
	
	printf("%p %p %p\n", &a,&ra,&rra);
}

void TestConstRef()
{
	const int a = 10;
	//int& ra = a;//该语句编译时会出错，a为常量
	const int& ra = a;

	//int& b = 10;//该语句编译时会出错，b为常量
	const int& b = 10;

	double d = 12.34;
	double& rrd = d;
	//int& rd = d;//该语句编译时会出错，类型不同
	//引用时如存在隐式类型转换，也需再类型前加const，且这时引用的不是变量本身，
	//而是隐式类型转换时的临时空间
	const int& rd = d;
}

//注意：引用类型必须和引用实体是同种类型的

//1、做参数
void Swap(int& a, int& b)
{
	//因为引用使用的是变量原空间，所以可以直接交换
	int temp = a;
	a = b;
	b = temp;
}

//2、做返回值
//由于存在栈中的地址，在函数结束后回还给操作系统，所以引用做返回值时，不能用栈中的地址
int& Add(int a, int b)
{
	//这里的c是局部变量，引用做返回值，返回的是c的别名，而c已经被回还给操作系统了。
	int c = a + b;
	return c;
}

int main_38()
{
	TestRef();
	int& ret = Add(1, 2);
	cout << "Add(1,2) is :" << ret << endl;
	int& ret1 = Add(3, 4);
	cout << "Add(3,4) is :" << ret1 << endl;
	return 0;
}