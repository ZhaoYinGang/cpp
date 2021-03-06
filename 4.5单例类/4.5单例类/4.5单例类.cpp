// 4.5单例类.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<string>
using namespace std;

class President {
private:
	President() {};
	President(const President&);
	const President& operator=(const President&);
	string name;
public:
	static President& getInstance() {
		static President onlyInstance;
		return onlyInstance;
	}
	string getName() {
		return name;
	}
	void setName(string newName) {
		name = newName;
	}
};


int main()
{
	President& onlyPresident = President::getInstance();
	onlyPresident.setName("Abraham Lincoln");
	cout << "The name of the President is: "<< President::getInstance().getName() << endl;
    return 0;
}

