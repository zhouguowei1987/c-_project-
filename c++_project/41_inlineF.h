#pragma once
#include <iostream>

using namespace std;

//inline不建议声明和定义分离，分离会导致链接错误。因为inline被展开，就没有函数地址了，链接就会找不到
inline void inline_f_41(int i);

void inline_f_41(int i)
{
	cout << i << endl;
}