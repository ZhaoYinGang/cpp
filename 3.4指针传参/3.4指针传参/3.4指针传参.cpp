// 3.4指针传参.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

void Area(	const double* const pPi,
			const double*const pR, 
			double* const pArea);

int main()
{
	const double Pi = 3.14159;
	double r = 1.0, area = 0.0;
	Area(&Pi, &r, &area);
	cout << area << endl;
    return 0;
}

void Area(	const double* const pPi,
			const double*const pR,
			double* const pArea) {
	if (pPi && pR && pArea)	//防止有NULL指针
	{
		*pArea = (*pPi)*(*pR)*(*pR);
	}
}