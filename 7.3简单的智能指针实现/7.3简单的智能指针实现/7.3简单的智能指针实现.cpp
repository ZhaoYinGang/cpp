// 7.3简单的智能指针实现.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

template<typename T>
class smart_pointer{
private:
	T* p;
public:
	smart_pointer(T* pData) :p(pData) {};
	~smart_pointer() {
		delete p;
	}
	T& operator* () const {
		return *p;
	}
	T* operator-> ()const {
		return p;
	}
};

class Date {
private:
	int Day, Mouth, Year;
public:
	Date(int InputDay, int InputMouth, int InputYear)
		:Day(InputDay), Mouth(InputMouth), Year(InputYear) {};

	void DisplayDate() {
		cout << Day << "/" << Mouth << "/" << Year << endl;
	}

};

int main()
{
	smart_pointer<int> p1(new int(42));
	cout << *p1 << endl;

	smart_pointer<float> p2(new float(42.2));
	cout << *p2 << endl;

	smart_pointer<Date> p3(new Date(25, 12, 2011));
	p3->DisplayDate();


	return 0;
}
