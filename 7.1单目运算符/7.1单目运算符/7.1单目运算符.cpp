// 7.1单目运算符.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Date{
private:
	int Day, Mouth, Year;
public:
	Date(int InputDay, int InputMouth, int InputYear)
		:Day(InputDay), Mouth(InputMouth), Year(InputYear) {};

	Date& operator ++() {	//前缀运算符
		++Day;
		return *this;
	}

	Date& operator --() {
		--Day;
		return *this;
	}

	Date& operator ++(int) {	//后缀运算符
		Date Copy(Day, Mouth, Year);
		Day++;
		return Copy;
	}

	Date& operator --(int) {
		Date Copy(Day, Mouth, Year);
		Day--;
		return Copy;
	}

	void DisplayDate() {
		cout << Day << "/" << Mouth << "/" << Year << endl;
	}

};

int main()
{
	Date Holiday(25, 12, 2011);
	Holiday.DisplayDate();

	++Holiday;
	Holiday.DisplayDate();
	--Holiday;
	Holiday.DisplayDate();

	Holiday++;
	Holiday.DisplayDate();
	Holiday--;
	Holiday.DisplayDate();

    return 0;
}

