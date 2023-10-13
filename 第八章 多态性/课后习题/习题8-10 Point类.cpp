//œ∞Ã‚8 - 10 Point¿‡
#include<iostream>
using namespace std;

class Point
{
public:
	Point(double x=0,double y=0):x(x),y(y){}
	friend Point operator+(Point& a,Point& b);
	friend ostream& operator<<(ostream& out, const Point& c);
private:
	double x;
	double y;
};

Point operator+(Point& a, Point& b)
{
	return Point(a.x + b.x, a.y + b.y);
}

ostream& operator<<(ostream& out, const Point &c)
{
	out << "(" << c.x << ", " << c.y << ")";
	return out;
}

int main()
{
	Point a(2, 3), b(5, 7), c;
	cout << "a" << a << endl;
	cout << "b" << b << endl;
	c = a + b;
	cout << "a + b = " << c << endl;
	return 0;
}