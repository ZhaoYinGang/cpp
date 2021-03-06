// 5.4保护继承.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Motor {
public:
	void switchIgnition() {
		cout << "ignition ON" << endl;
	}
	void pumpFuel() {
		cout << "Fuel in cylinders" << endl;
	}
	void fireCylinders() {
		cout << "Vroooom" << endl;
	}
};
class Car :protected Motor {	//保护继承
public:
	void Move() {
		switchIgnition();
		pumpFuel();
		fireCylinders();
	}
};

class SuperCar :protected Car {		//Car为保护继承 可以访问Motor
public:
	void Move() {
		switchIgnition();
		pumpFuel();
		fireCylinders();
		fireCylinders();
		fireCylinders();
	}
};

int main()
{
	SuperCar myCar;
	myCar.Move();
	return 0;
}

