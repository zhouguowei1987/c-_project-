#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

enum Sex
{
	male,//男
	female,//女
};

struct Student
{
	char name[100];
	int age;
	Sex sex;
};

int main_17()
{
	Student s1, s2;
	strcpy(s1.name , "张三");
	s1.age = 18;
	s1.sex = male;
	cout << "name = " << s1.name << endl;
	cout << "age = " << s1.age << endl;
	cout << "sex = " << s1.sex << endl;

	strcpy(s2.name, "路西");
	s2.age = 16;
	s2.sex = female;
	cout << "name = " << s2.name << endl;
	cout << "age = " << s2.age << endl;
	cout << "sex = " << s2.sex << endl;

	return 0;
}