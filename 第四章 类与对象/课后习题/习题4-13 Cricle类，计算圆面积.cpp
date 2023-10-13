//习题4-13 Cricle类，计算圆面积
#include<iostream>
using namespace std;
const double PI = 3.141593;

class Circle
{
public:
	Circle(double r);
	double CalculateArea(double r);
private:
	double radius;
};

Circle::Circle(double r)
{
	radius = r;
}

double Circle::CalculateArea(double r)
{
	return r * r * PI;
}

int main()
{
	double r;
	cout << "Please enter the radius of circle : " << endl;
	cin >> r;
	Circle c(r);
	cout <<"The area is : " << c.CalculateArea(r) << endl;
	return 0;
}