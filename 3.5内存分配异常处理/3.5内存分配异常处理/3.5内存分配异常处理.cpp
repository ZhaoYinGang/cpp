// 3.5内存分配异常处理.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;


int main()
{
	//方法一 异常处理
	try {
		long long int* p1 = new long long int[0xfffffff];

		delete[] p1;
	}
	catch (bad_alloc) {
		cout << "Memory allocation failed.Ending program" << endl;
	}

	//方法二 new(nothrow) 不引发异常，返回NULL
	long long int* p2 = new(nothrow) long long int[0xfffffff];
	if (p2)	//确认 p2 != NULL
	{	
		delete[] p2;
	}	
	else 
		cout << "Memory allocation failed.Ending program" << endl;
    return 0;
}

