// 3.1指针.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

int main()
{
	int age1 = 15, age2 = 35;
	int* p = &age1;

	cout << p << endl;
	cout << *p << endl;

	p = &age2;

	cout << p << endl;
	cout << *p << endl;

	*p = 38;
	cout << age2 << endl;

	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(double*) << endl;	//指针的字节数固定

    return 0;
}

