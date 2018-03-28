// 5.3私有继承.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class Motor {
public:
	void switchIgnition() {
		cout << "ignition ON" << endl;
	}
	void pumpFuel() {
		cout<<"Fuel in cylinders" << endl;
	}
	void fireCylinders() {
		cout << "Vroooom" << endl;
	}
};
class Car :private Motor {	//私有继承
public:
	void Move() {
		switchIgnition();
		pumpFuel();
		fireCylinders();
	}
};


int main()
{
	Car myCar;
	myCar.Move();
	//myCar.fireCylinders();//错误 私有继承 无法访问
    return 0;
}

