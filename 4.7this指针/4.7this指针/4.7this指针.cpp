// 4.7this指针.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<string>
using namespace std;

class Human {
private:
	string name;
	int age;
public:
	void setName(string newName) {
		this->name = newName;	//相当于 name = newName;
	}
	void setAge(int newAge) {
		this->age = newAge;	//相当于 age = newAge;	
	}
	void talk(string statement) {
		cout << statement;
	}
	void introduceSelf() {
		cout << "I'm " + name + " and am " << age << " years old." << endl;
		this->talk("Bla bla.");	//相当于 talk("Bla bla.");
	}
};

int main()
{
	Human man;
	man.setName("Adam");
	man.setAge(35);
	man.introduceSelf();

	return 0;
}