// 5.5多继承.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Mammal {
public:
	void FeedBabyMilk() {
		cout << "Mammal: Baby says glug!" << endl;
	}
};

class Reptile {
public:
	void SpitVenom() {
		cout << "Reptile: Shoo enem! Spits venom!" << endl;
	}
};

class Bird {
public:
	void LayEggs() {
		cout << "Bird: Laid my eggs, am lighter now!" << endl;
	}
};

class Platypus :public Mammal, public Bird, public Reptile {	//多继承
public:
	void swim() {
		cout << "Platypus: Voila, I can swim！" << endl;
	}
};


int main()
{
	Platypus realFreak;
	realFreak.LayEggs();
	realFreak.FeedBabyMilk();
	realFreak.SpitVenom();
	realFreak.swim();
    return 0;
}

