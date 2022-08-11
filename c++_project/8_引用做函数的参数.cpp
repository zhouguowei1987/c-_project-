#include <iostream>

using namespace std;

void swapaa_8(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main_8()
{
	int a = 10, b = 20;
	swapaa_8(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

