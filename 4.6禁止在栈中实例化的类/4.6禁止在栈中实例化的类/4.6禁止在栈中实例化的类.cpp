// 4.6禁止在栈中实例化的类.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;

class MonsterDB {
public:
	static void DestoryInstance(MonsterDB* p) {
		delete p;
	}
private:
	~MonsterDB(){};	//析构函数设为私有
};

int main()
{
	MonsterDB* pMyDatabase = new MonsterDB();
	MonsterDB::DestoryInstance(pMyDatabase);
    return 0;
}

