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

	~MyString()	//析构函数
	{
		cout << "Invoking destructor, cleaning up" << endl;
		if (Buffer != NULL) {
			delete[] Buffer;
		}
	}

	int getLength() {
		return strlen(Buffer);
	}

	const char* getString() {
		return Buffer;
	}

};

int main()
{
	MyString sayHello("Hello from String class");
	cout << "String buffer in MyString is " << sayHello.getLength()
		<< " characters long" << endl;
	cout << "Buffer contains: " << sayHello.getString() << endl;
    return 0;
}

