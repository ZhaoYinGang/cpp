// 4.3析构函数.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class MyString
{
private:
	char* Buffer;
public:
	MyString(const char* p) {
		if (p != NULL) {
			Buffer = new char[strlen(p) + 1];
			strcpy(Buffer, p);
		}
		else
			Buffer = NULL;
	}
	~MyString()
	{
		if (Buffer != NULL) {
			delete[] Buffer;
		}
	}
	int GetLength() {

	}
};

int main()
{
    return 0;
}

