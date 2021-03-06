// 5.1继承.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Fish {
protected:	//禁止在继承层次结构外部访问
	bool freshWaterFish;
public:
	Fish(bool isFreshWater):freshWaterFish(isFreshWater){}
	void swim() {
		if (freshWaterFish) {
			cout << "Swims in lake" <<endl ;
		}
		else {
			cout << "Swims in sea" << endl;
		}
	}
};

class Tuna:public Fish {	//共有继承
public:
	Tuna() :Fish(false) {};
};

class Carp:public Fish {
public:
	Carp() :Fish(true) {};

	void swim() {	//覆盖基类的方法
		cout << "Swims real slow" << endl;
		//Fish::swim();	//派生类中调用覆盖的方法
	}
};

int main()
{
	
	Tuna myTuna;
	cout << "Tuna: ";
	myTuna.swim();

	Carp myCarp;
	cout << "Carp: ";
	myCarp.swim();
	myCarp.Fish::swim();	//调用基类的方法

	return 0;
}

