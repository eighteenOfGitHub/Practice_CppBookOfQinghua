//习题5 - 14 Boat类和Car类求合重量
#include<iostream>
using namespace std;

//前向引用声明
class Car;

class Boat
{
public:
	//构造函数
	Boat(double weight1) :weightofboat(weight1) {};
	//友元函数声明
	friend double getTotalWeight(Boat& b1, Car& c1);
private:
	double weightofboat;
};

class Car
{
public:
	//构造函数
	Car(double weight2) :weightofcar(weight2) {};
	//友元函数声明
	friend double getTotalWeight(Boat& b1, Car& c1);
private:
	double weightofcar;
};

//友元函数实现
double getTotalWeight(Boat& b1, Car& c1)
{
	return c1.weightofcar + b1.weightofboat;
}

//主函数
int main()
{
	double weight1, weight2;
	cout << "the boat of weight : ";
	cin >> weight1;
	cout << "the car of weight : ";
	cin >> weight2;
	//实例化对象
	Boat b1(weight1);
	Car c1(weight2);
	//计算并输出总重量
	cout << "the total weight : " << getTotalWeight(b1, c1) << endl;
	return 0;
}

