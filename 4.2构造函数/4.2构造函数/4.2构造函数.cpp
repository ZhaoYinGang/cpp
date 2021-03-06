// 4.2构造函数.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<string>
using namespace std;

class Human {
private:
	string name;
	int age;
public:
	//Human()	//默认构造函数
	//{
	//	name = "Adam";
	//	age = 20;	//对年龄赋初值
	//}
	//Human(string newName)	//重载构造函数1
	//{
	//	name = newName;
	//	age = 20;
	//}
	//Human(string newName,int newAge)	//重载构造函数2
	//{
	//	name = newName;
	//	age = newAge;
	//}

	//以上三个构造函数可写成带默认值的构造函数 
	//Human(string newName = "Ada", int newAge = 20)	//重载构造函数2
	//{
	//	name = newName;
	//	age = newAge;
	//}

	//也可以写成包含初始化列表的构造函数
	Human(string newName = "Ada", int newAge = 20)	//重载构造函数2
		:name(newName), age(newAge) {};

	void setName(string newName) {
		name = newName;
	}
	void setAge(int newAge) {
		age = newAge;
	}
	void introduceSelf() {
		if (age > 30) {	//对外隐藏真实年龄
			age -= 2;
		}
		cout << name + " is " << age << " year(s) old." << endl;
	}
};

int main()
{
	Human man;
	//man.setName("Adam"); //构造函数中已经有初值 可以不赋值
	man.setAge(35);
	man.introduceSelf();

	Human woman;
	woman.setName("Eve");
	//woman.setAge(20);	//构造函数中已经有初值 可以不赋值
	woman.introduceSelf();

	Human boy("Jack");
	boy.introduceSelf();

	Human girl("Amy",12);
	girl.introduceSelf();

	return 0;
}

