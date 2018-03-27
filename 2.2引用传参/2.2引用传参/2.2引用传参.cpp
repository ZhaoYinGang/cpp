// 2.2引用传参.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

const double Pi = 3.14159;

void Area(double r, double &area);	//& 引用

int main()
{
	double r = 1.0, area = 0.0;
	Area(r, area);
	cout << area << endl;
    return 0;
}

void Area(double r, double &area) {
	area = Pi * r*r;
}