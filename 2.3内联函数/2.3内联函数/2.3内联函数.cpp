// 2.3内联函数.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

inline double getPi();	//声明内联函数

int main()
{
	double r = 1.0;
	cout << r * r*getPi() << endl;
    return 0;
}

inline double getPi() {
	return 3.14159;
}