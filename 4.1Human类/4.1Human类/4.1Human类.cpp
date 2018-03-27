// 4.1Human类.cpp: 定义控制台应用程序的入口点。
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
		name = newName;
	}
	void setAge(int newAge) {
		age = newAge;
	}
	void introduceSelf(){
		if (age > 30) {	//对外隐藏真实年龄
			age -= 2;
		}
		cout << "I'm " + name + " and am " << age << " years old." << endl;
	}
};

int main()
{
	Human man,woman;
	man.setName("Adam");
	man.setAge(35);
	man.introduceSelf();
	woman.setName("Eve");
	woman.setAge(20);
	woman.introduceSelf();
    return 0;
}

