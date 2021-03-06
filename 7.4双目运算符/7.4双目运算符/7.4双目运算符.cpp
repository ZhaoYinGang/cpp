// 7.4双目运算符.cpp: 定义控制台应用程序的入口点。
//
// 7.1单目运算符.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Date {
private:
	int Day, Mouth, Year;
public:
	Date(int InputDay, int InputMouth, int InputYear)
		:Day(InputDay), Mouth(InputMouth), Year(InputYear) {};

	Date operator +(int DaysToAdd) {	
		Date newDate(Day + DaysToAdd, Mouth, Year);
		return newDate;
	}

	Date operator -(int DaysToSub) {
		Date newDate(Day - DaysToSub, Mouth, Year);
		return newDate;
	}

	void operator +=(int DaysToSub) {
		Day += DaysToSub;
	}

	void operator -=(int DaysToSub) {
		Day -= DaysToSub;
	}

	void DisplayDate() {
		cout << Day << "/" << Mouth << "/" << Year << endl;
	}

};

int main()
{
	Date Holiday(25, 12, 2011);
	Holiday.DisplayDate();

	Date Holiday2(Holiday + 6);
	Holiday2.DisplayDate();

	Date Holiday3(Holiday - 19);
	Holiday3.DisplayDate();

	Holiday += 6;
	Holiday.DisplayDate();

	return 0;
}

