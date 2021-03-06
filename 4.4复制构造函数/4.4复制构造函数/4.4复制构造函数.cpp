// 4.4复制构造函数.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class MyString {
private:
	char* Buffer;
public:
	MyString(const char* str) {
		cout << "构造函数：构造一个新的MyString" << endl;
		if (str != NULL) {
			Buffer = new char[strlen(str) + 1];
			strcpy(Buffer, str);	//将初值str传给Buffer

			cout << "缓存区Buffer指向: 0x" << hex << (unsigned int*)Buffer 
				<< endl << endl;
		}
		else {
			Buffer = NULL;
		}
	}

	MyString(const MyString& copyStr)	//复制构造函数
	{
		cout << "复制构造函数：从MyString复制" << endl;
		if (copyStr.Buffer != NULL) {
			Buffer = new char[strlen(copyStr.Buffer) + 1];
			strcpy(Buffer, copyStr.Buffer);	

			cout << "缓存区Buffer指向: 0x" << hex << (unsigned int*)Buffer 
				<< endl << endl;
		}
		else {
			Buffer = NULL;
		}
	}

	~MyString()
	{
		cout << "析构函数:释放内存" << endl << endl;
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

void useMyString(MyString str) {
	cout << "MyString中的字符串缓冲区占" << str.getLength()
		<< "字节" << endl;
	cout << "缓冲区内容：" << str.getString() << endl << endl;
	return;
}


int main()
{
	MyString sayHello("Hello from String class");
	useMyString(sayHello);
    return 0;
}

