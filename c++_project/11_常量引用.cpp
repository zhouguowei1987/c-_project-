#include <iostream>

using namespace std;

//引用使用的场景，通常用来修饰形参
void showValue_11(const int& v)
{
	cout << v << endl;
}

int main_11()
{
	//int& ref = 10;//错误，引用本身需要一个合法的内存空间
	//加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;（注意会附加const属性）
	const int& ref = 10;

	//ref = 100;//加入const后不可修改变量
	cout << ref << endl;

	//函数中利用常量引用防止误操作修改实参
	int a = 10;
	showValue_11(a);
	return 0;

}