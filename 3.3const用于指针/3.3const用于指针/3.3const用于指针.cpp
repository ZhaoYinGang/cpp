// 3.3const用于指针.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

int main()
{
	int a = 1;

	const int* p1;	//指针指向数据为常量 可修改p1
	int* const p2 = &a;	//指针地址为常量 p2需要处初值 可修改*p2
	const int* const p3 = &a;	//地址和指向数据都为常量 p3需要初值

    return 0;
}

