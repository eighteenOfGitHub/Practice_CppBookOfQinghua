//习题4-9 Rectangle矩形类
#include<iostream>
#include<cmath>
using namespace std;

class Point
{
public:
	Point(double xx, double yy)
	{
		x = xx;
		y = yy;
	}
	Point(Point& p);
	
	Point();//GetX和GetY用到默认构造函数，不写也可以，Rectangle.GetArea类同
	double GetX(){return x;}
	double GetY(){return y;}
private:
	double x, y;
};

Point::Point(Point& p)
{
	x = p.x;
	y = p.y;
}

class Rectangle
{
private:
	double area;
	Point A, D;
public:
	Rectangle(Point AA, Point DD);
	Rectangle(Rectangle& a);
	double GetArea() { return area; }
};

Rectangle::Rectangle(Point AA, Point DD):A(AA),D(DD)
{
	double R_X = fabs(AA.GetX() - DD.GetX());
	double R_Y = fabs(AA.GetY() - DD.GetY());
	area = R_X * R_Y;
}

Rectangle::Rectangle(Rectangle& a):A(a.A),D(a.D)
{
	area = a.area;
}

int main()
{
	double xa, ya,yd,xd;
	cout << "Please enter A(xa,ya)" << endl;
	cin >> xa >> ya;
	cout << "Please enter D(xd,yd)" << endl;
	cin >> xd >> yd;
	Point A(xa,ya),D(xd,yd);
	Rectangle Rec(A, D);
	cout <<"The rectangle's area is "<< Rec.GetArea() << endl;
	return 0;
}