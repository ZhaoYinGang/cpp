// 2.4lambda函数.cpp: 定义控制台应用程序的入口点。
//lambda 语法	[optional parameters](parameter list){statements;}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void DisplayNums(vector<int>& a);

int main()
{
	vector<int> num;
	num.push_back(219);
	num.push_back(34);
	num.push_back(863);
	num.push_back(-78);

	DisplayNums(num);

	sort(num.begin(), num. end(), [](int num1, int num2) {return(num1 < num2); });	//lambda

	DisplayNums(num);

    return 0;
}

void DisplayNums(vector<int>& a) {
	for_each(a.begin(), a.end(), [](int Element) {cout << Element << " "; });	//lambda
	cout << endl;
}