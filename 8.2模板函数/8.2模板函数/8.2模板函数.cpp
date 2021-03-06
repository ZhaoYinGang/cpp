// 8.2模板函数.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

template <typename Type>	//声明模板
const Type& Max(const Type& a, const Type& b) {
	if (a > b) {
		return a;
	}
	else
		return b;
}

int main()
{
	int a = 25, b = 40;
	int c = Max<int>(a, b);

	double x = 2.2, y = 3.4;
	//double z = Max<double>(x, y);
	double z = Max(x, y);	//同上句

	cout << c << endl;
	cout << z << endl;

	return 0;
}

