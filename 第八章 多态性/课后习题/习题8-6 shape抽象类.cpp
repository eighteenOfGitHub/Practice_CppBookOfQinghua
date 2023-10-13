//习题8 - 6 shape抽象类
#include<iostream>
using namespace std;
const double PI = 3.14;

class Shape
{
public:
	virtual double getArea() = 0;
	virtual double getPerim() = 0;
private:
	double Area, Perim;
};

class Rectangle :public Shape
{
public:
	Rectangle(double len = 0, double wid = 0) :length(len), width(wid)
	{
		cout << "长为 " << length << " 宽为 " << width << " 的矩形已构造。" << endl;
	}
	double getArea() { return length * width; }
	double getPerim() { return (length + width) * 2; }
	
	double getlength() { return length; }
	double getwidth() { return width; }
private:
	double length, width;
};

class Circle :public Shape
{
public:
	Circle(double rad = 0) :radius(rad)
	{
		cout << "半径为 " << radius << " 的圆形已构造。" << endl;
	}
	double getArea() { return radius * radius * PI; }
	double getPerim() { return radius * 2 * PI; }
	
	double getradius() { return radius; }
private:
	double radius;
};

double func_getArea(Shape* ptr)
{
	return ptr->getArea();
}
double func_getPerim(Shape* ptr)
{
	return ptr->getPerim();
}

int main()
{
	Rectangle rec1(3, 4);
	cout << "矩形的面积为： " << func_getArea(&rec1) << endl;
	cout << "矩形的周长为： " << func_getPerim(&rec1) << endl;
	Circle cir1(5);
	cout << "圆形的面积为： " << func_getArea(&cir1) << endl;
	cout << "圆形的周长为： " << func_getPerim(&cir1) << endl;
	return 0;
}