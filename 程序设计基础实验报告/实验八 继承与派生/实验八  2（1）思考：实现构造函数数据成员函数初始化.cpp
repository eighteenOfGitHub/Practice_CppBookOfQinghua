//实验八  2（1）思考：实现构造函数数据成员函数初始化
#include<iostream>
using namespace std;

class vehicle
{
protected:
	int wheels;
	double weight;
public:
	vehicle(int wheels = 0, double weight = 0) :wheels(wheels), weight(weight){};
	void initialize(int whls, double wght);
	int get_wheels() { return wheels; }
	double get_weight() { return weight; }
	double wheel_loading() { return weight / wheels; }
};

class car : public vehicle
{
private:
	int passenger_load;
public:
	car(int passenger_load = 0,int wheel=0,double weight=0) :
		passenger_load(passenger_load),vehicle(wheel,weight) {};
	void initialize(int whls, double wght, int people = 4);
	int passengers() { return passenger_load; }
};

class truck : public vehicle
{
private:
	int passenger_load;
	double payload;
public:
	truck(int passenger_load = 0, double payload = 0, int wheel = 0, double weight = 0) :
		passenger_load(passenger_load), payload(payload), vehicle(wheel, weight){};
	void init_truck(int number = 2, double max_load = 24000.0);
	double efficiency();
	int passengers() { return passenger_load; }
};

//class car : private vehicle
//{
//private:
//	int passenger_load;
//public:
//	void initialize(int whls, double wght, int people = 4);
//	int passengers() { return passenger_load; }
//};
//
//class truck : private vehicle
//{
//private:
//	int passenger_load;
//	double payload;
//public:
//	void init_truck(int number = 2, double max_load = 24000.0);
//	double efficiency();
//	int passengers() { return passenger_load; }
//};

//答：不能正常运行。
//因为car, truck使用private从vehicle继承，
//vehicle::get_weight, vehicle::get_wheels等一些函数不可访问,
//所以程序不能正常运行。

void vehicle::initialize(int whls, double wght)
{
	wheels = whls;
	weight = wght;
}

void car::initialize(int whls, double wght, int people)
{
	wheels = whls;
	weight = wght;
	passenger_load = people;
}

void truck::init_truck(int number, double max_load)
{
	passenger_load = number;
	payload = max_load;
}

double truck::efficiency()
{
	return payload / (payload + weight);
}

void main()
{
	vehicle bicycle;
	bicycle.initialize(2, 25);
	cout << "the bicycle has " << bicycle.get_wheels() << " wheels.\n";
	cout << "the bicycle weighs " << bicycle.get_weight() << " pounds.\n";
	cout << "the bicycle's wheel loading is " << bicycle.wheel_loading() << " pounds per tire.\n\n";

	car audi;
	audi.initialize(4, 3500.0, 5);
	cout << "the audi has " << audi.get_wheels() << " wheels.\n";
	cout << "the audi weighs " << audi.get_weight() << " pounds.\n";
	cout << "the audi's wheel loading is " << audi.wheel_loading() << " pounds per tire.\n\n";

	truck jief;
	jief.initialize(18, 12500.0);
	jief.init_truck(2, 33675.0);
	cout << "the jief has " << jief.get_wheels() << " wheels.\n";
	cout << "the jief weighs " << jief.get_weight() << " pounds.\n";
	cout << "the jief's efficiency is " << 100.0 * jief.efficiency() << " percent.\n";
}
