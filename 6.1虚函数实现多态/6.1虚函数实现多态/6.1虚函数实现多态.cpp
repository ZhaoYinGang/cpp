// 6.1虚函数实现多态.cpp: 定义控制台应用程序的入口点。
//
//将基类的析构函数声明为虚函数,可以避免delete用于Base指针是，不会调用派生类的析构函数的情况发生。
//class Base {
//public:
//	virtual ~Base(){};
//};

#include<iostream>
using namespace std;

class Fish {
public:
	virtual void Swim() {	//使用virtual声明为虚函数
		cout << "Fish swims" << endl;
	}
};

class Tuna :public Fish {	
public:
	void Swim() {
		cout << "Tuna swims" << endl;
	}
};

class Carp :public Fish {
public:
	void Swim() {	
		cout << "Carp swims" << endl;
	}
};

void MakeFishSwim(Fish& InputFish) {
	InputFish.Swim();
}

int main()
{

	Tuna myTuna;
	Carp myCarp;

	MakeFishSwim(myTuna);
	MakeFishSwim(myCarp);	//多态：将派生类视为基类，执行派生类的Swim()实现
							//class Fish 中 void Swim() 不使用virtual声明为虚函数将输出Fish swims

	return 0;
}

