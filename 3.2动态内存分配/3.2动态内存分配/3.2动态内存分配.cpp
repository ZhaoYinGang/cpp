// 3.2动态内存分配.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

int main()
{
	int* p = new int;	//new type分配内存
	*p = 10;
	cout << *p << endl << endl;
	delete p;	//delete释放内存

	int* pNum = new int[3];	//new type[num]多个元素分配内存
	for (int i = 0; i < 3; i++) {
		*(pNum+i) = i;
	}
	for (int i = 0; i < 3; i++) {
		cout << *(pNum++) << endl;
	}
	
	delete[] pNum;	//delete[]释放多个内存

    return 0;
}

