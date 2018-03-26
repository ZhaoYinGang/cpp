// 1.1动态数组.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> a(3);	//定义动态数组	注意语法
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	cout << a.size() << endl;

	a.push_back(4);	//添加一位数组 数组长度加一
	cout << a.size() << endl;
	cout << sizeof(a) << endl;	//如果写成这样 则a占字节数

	return 0;
}


