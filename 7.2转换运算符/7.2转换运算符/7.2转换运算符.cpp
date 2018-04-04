// 7.2转换运算符.cpp: 定义控制台应用程序的入口点。
//

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Date {
private:
	int Day, Mouth, Year;
	string DateInstring;
public:
	Date(int InputDay, int InputMouth, int InputYear)
		:Day(InputDay), Mouth(InputMouth), Year(InputYear) {};

	operator const char*() {
		ostringstream intTostring;	//整型转换为string型
		intTostring << Day << "/" << Mouth << "/" << Year;
		DateInstring = intTostring.str();
		return DateInstring.c_str();
	}

};

int main()
{
	Date Holiday(25, 12, 2011);
	cout << Holiday << endl;
	return 0;
}

