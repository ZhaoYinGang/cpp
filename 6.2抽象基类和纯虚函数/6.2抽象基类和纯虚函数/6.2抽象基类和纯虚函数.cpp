// 6.2抽象基类和纯虚函数.cpp: 定义控制台应用程序的入口点。
//

#include<iostream>
using namespace std;

class Fish {
public:
	virtual void Swim() = 0;	//纯虚函数
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
	//Fish myFish;	//错误 
	Tuna myTuna;
	Carp myCarp;

	MakeFishSwim(myTuna);
	MakeFishSwim(myCarp);	

	return 0;
}

