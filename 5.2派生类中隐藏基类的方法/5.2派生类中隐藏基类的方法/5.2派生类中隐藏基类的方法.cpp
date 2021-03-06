// 5.2派生类中隐藏基类的方法.cpp: 定义控制台应用程序的入口点。
//
// 5.1继承.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Fish {
public:
	void swim() {
		cout << "Fish swims..." << endl;
	}
	void swim(bool freshWaterFish) {
		if (freshWaterFish) {
			cout << "Swims in lake" << endl;
		}
		else {
			cout << "Swims in sea" << endl;
		}
	}
};

class Tuna :public Fish {
public:
	void swim() {		//Tuna实现了自己的Tuna::swim(),隐藏了Fish::swim(bool)
		cout << "Tuna swims real fast" << endl;
	}
};

int main()
{

	Tuna myTuna;
	myTuna.swim();	//等效于myTuna.Tuna::swim();
	//myTuna.swim(false);	//错误
	myTuna.Fish::swim();		//解除隐藏
	myTuna.Fish::swim(false);	//解除隐藏
	return 0;
}

//使myTuna.swim(false);可用：
//方法一 使用关键字using
//class Tuna :public Fish {
//public:
//	using Fish::swim;
//	void swim() {		
//		cout << "Tuna swims real fast" << endl;
//	}
//};
//方法二 覆盖Fish::swim()所有重载版本
//class Tuna :public Fish {
//public:
//void swim(bool freshWaterFish) {
//	Fish::swim(freshWaterFish);
//	}
//	void swim() {		
//		cout << "Tuna swims real fast" << endl;
//	}
//};