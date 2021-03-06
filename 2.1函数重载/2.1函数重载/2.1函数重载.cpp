// 2.1函数重载.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

const double Pi = 3.14159;

double Area(double r);
double Area(double w, double h);	//参数不同返回类型相同的函数可重名

int main()
{
	double r = 1.0, w = 2.0, h = 3.0;
	cout << Area(r) << endl;
	cout << Area(w, h) << endl;
    return 0;
}

double Area(double r) {
	return Pi * r*r;
}

double Area(double w, double h) {
	return w * h;
}