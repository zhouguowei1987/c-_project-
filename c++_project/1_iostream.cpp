#include <iostream>
#include <string>

using namespace std;

int main_1()
{
	int inputNumber;
	cout << "Enter an integer:";
	cin >> inputNumber;

	string inputName;
	cout << "Enter your name:";
	cin >> inputName;

	cout << inputName << " entered " << inputNumber << endl;

	string variable1, variable2;
	cout << "Enter variable1 and variable2:";
	cin >> variable1 >> variable2;
	cout << "variable1:" << variable1 << endl;
	cout << "variable2:" << variable2 << endl;


	return 0;
}