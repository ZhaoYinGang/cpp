// 1.2字符串.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str1("Hello");	//定义字符串
	cout << str1 << endl;

	string str2;
	getline(cin, str2);	//输入字符串给str2
	cout << str2 << endl;
	
	string str3;
	str3 = str1 + " " + str2;	//字符串可以相加和赋值
	cout << str3 << endl;

	cout << str3.length() << endl; 	//输出str3长度

    return 0;
}

