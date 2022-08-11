#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

namespace N
{
	//在命名空间中定义的成员本质是全局的，放在静态区
	//命名空间中变量可以初始化，但不能赋值
	//int a;//定义变量a，未初始化
	//a = 10;//不能在命名空间中赋值

	int a = 10;
	int b = 20;

	int Add(int x, int y)
	{
		return x + y;
	}
	int Sub(int x, int y)
	{
		return x - y;
	}
}

int main_37()
{
	//printf("%d\n", a);//该语句编译出错，无法识别变量a

	//方法1、加命名空间名称及作用域限定符（::）（最安全，但使用时不太方便）
	//printf("%d\n", N::a);

	//方法2、使用using将命名空间中的成员引入（展开命名空间中常用的成员）
	//using N::a;
	//printf("%d\n", a);

	//方法3、使用using namespace N 命名空间名称引入（不可靠，在项目中不能使用该方法）
	using namespace N;
	printf("%d\n", a);

	return 0;
}