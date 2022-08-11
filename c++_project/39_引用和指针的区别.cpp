#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//1、引用在定义时必须初始化，指针没有要求
//2、引用在初始化时引用一个实体后，就不能再引用其他实体，而指针可以再任何时候指向任何一个同类型实体
//3、没有NULL引用，但有NULL指针
//4、在sizeof中含义不同：
	//引用结果为引用类型的大小
	//但指针始终是地址空间所占字节个数
//5、引用自加即引用实体增加1，指针自加即指针向后便宜一个类型的大小
//6、有多级指针，但是没有多级引用
//7、访问实体方式不同，指针需要显示解引用，引用编译器自己处理
//8、引用比指针使用起来相对更安全
int main()
{
	char a = 10;
	char& ra = a;
	ra = 20;
	printf("%p %p\n", &a, &ra);
	cout << sizeof(ra) << endl;

	char* pa = &a;
	*pa = 20;
	printf("%p %p\n", &a, pa);
	cout << sizeof(pa);

	return 0;
}