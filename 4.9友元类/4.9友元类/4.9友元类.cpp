// 4.9友元类.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<string>
using namespace std;

class Human {
private:
	string name;
	int age;
	friend class Utility;	//友元类
public:
	Human(string inputName, int inputAge) :
		name(inputName), age(inputAge) {};
};

class Utility {
public:
	static void displayAge(const Human& person) {
		cout << person.age << endl;
	}
};

int main()
{
	Human man("Adam", 25);
	Utility::displayAge(man);	//从外部访问类的私有数据成员和方法
	return 0;
}

