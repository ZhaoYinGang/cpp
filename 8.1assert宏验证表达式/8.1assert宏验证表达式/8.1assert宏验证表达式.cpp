// 8.1assert宏验证表达式.cpp: 定义控制台应用程序的入口点。
//
#include<assert.h>
#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	assert(a != 1);		//不可通过验证
	//assert(a = 1);	//可通过验证
	cout << a << endl;
    return 0;
}

