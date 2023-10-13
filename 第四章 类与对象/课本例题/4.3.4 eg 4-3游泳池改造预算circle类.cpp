//4.3.4 eg 4-3游泳池改造预算circle类
#include<iostream>
using namespace std;

const float pi = 3.141593;
const float fence_price = 35;
const float concrete_price = 20;

class circle
{
public:
	circle(float r);
	float circumference();
	float area();
private:
	float radius;
};

circle::circle(float r){radius=r;}
float circle::circumference() { return 2 * pi * radius; }
float circle::area() { return pi * radius * radius; }

int main()
{
	float radius;
	cout << "enter the radius of the pool:";
	cin >> radius;
	circle pool(radius);
	circle poolrim(radius + 3);

	float fencecost = poolrim.circumference() * fence_price;
	cout << "fencing cost is $" << fencecost << endl;
	float concretecost = (poolrim.area() - pool.area()) * concrete_price;
	cout << "concrete cost is $" << concretecost << endl;
	
	return 0;
}

