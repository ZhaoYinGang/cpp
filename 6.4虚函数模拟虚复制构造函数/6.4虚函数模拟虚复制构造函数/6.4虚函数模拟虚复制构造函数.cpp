// 6.4虚函数模拟虚复制构造函数.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Fish {
public:
	virtual Fish* Clone() = 0;
	virtual void Swim() = 0;

};

class Tuna :public Fish {
public:
	Fish* Clone() {
		return new Tuna(*this);	//相当于	return new Tuna();
	}
	void Swim() {
		cout << "Tuna swims fast" << endl;
	}
};

class Carp :public Fish {
public:
	Fish* Clone() {
		return new Carp(*this);
	}
	void Swim() {
		cout << "Carp swims slow" << endl;
	}
};

int main()
{
	const int ARRAY_SIZE = 4;
	Fish* myFishes[ARRAY_SIZE] = { NULL };
	myFishes[0] = new Tuna();
	myFishes[1] = new Carp();
	myFishes[2] = new Tuna();
	myFishes[3] = new Carp();

	Fish* myNewFishes[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; ++i) {
		myNewFishes[i] = myFishes[i]->Clone();
	}

	for (int i = 0; i < ARRAY_SIZE; ++i) {
		myNewFishes[i]->Swim();
	}

	for (int i = 0; i < ARRAY_SIZE; ++i) {
		delete myFishes[i];
		delete myNewFishes[i];
	}


    return 0;
}

