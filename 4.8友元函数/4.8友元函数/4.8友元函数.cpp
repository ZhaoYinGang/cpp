// 4.8友元函数.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<string>
using namespace std;

class Human {
private:
	string name;
	int age;
	friend void displayAge(const Human& person);	//友元函数
public:
	Human(string inputName, int inputAge) :
		name(inputName), age(inputAge) {};
	void DisplayAge()
	{
		cout << age << endl;
	}
};

int main()
{
	Human man("Adam", 25);
	displayAge(man);	//从外部访问类的私有数据成员和方法
	man.DisplayAge();	//从类的共有方法访问类的私有数据成员和方法
	return 0;
}

void displayAge(const Human & person)
{
	cout << person.age << endl;
}
