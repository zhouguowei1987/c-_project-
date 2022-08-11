#include <iostream>

using namespace std;

int main_5()
{
	int n[10];
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	for (int j = 0; j < 10; j++)
	{
		cout << n[j] << endl;
	}

	return 0;
}