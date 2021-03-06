// 8.3模板类.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>
#include<string>
using namespace std;

template <typename T1 = int , typename T2 = double>	//声明包含默认参数的模板
class HoldsPair {
private:
	T1 Value1;
	T2 Value2;
public:
	HoldsPair(T1 value1,T2 value2) {
		Value1 = value1;
		Value2 = value2;
	};
	T1 GetValue1(){
		return Value1;
	}
	T2 GetValue2(){
		return Value2;
	}
};

int main()
{
	HoldsPair<> Pair1(20, 10.5);
	cout << Pair1.GetValue1() << "," << Pair1.GetValue2() << endl;

	HoldsPair<double,string> Pair2(3.0, "C++");
	cout << Pair2.GetValue1() << "," << Pair2.GetValue2() << endl;

	return 0;
}

