//4.4.1 eg4-4  类的组合线段Line类
#include<iostream>
#include<cmath>
using namespace std;

//point类定义
class Point
{
public:
	Point(int xx = 0, int yy = 0)
	{
		x = xx;
		y = yy;
	}
	Point(Point& p);
	int getX() { return x; }
	int getY() { return y; }

private:
	int x, y;
};

//复制构造函数的实现
Point::Point(Point& p)
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

//类的组合
//Line类的定义
class Line
{
public:
	Line(Point xp1, Point xp2);
	Line(Line& l); 
	double getLen() { return len; }

private:
	Point p1, p2;
	double len;
};

//组合函数的构造函数
Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2)
{
	cout << "Calling cosntructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
//组合类的复制构造函数
Line::Line(Line &l) :p1(l.p1), p2(l.p2)
{
	cout << "Calling the copy construtor of Line" << endl;
	len = l.len;
}
//主函数
int main()
{
	//建立Point类的对象
	Point myp1(1, 1), myp2(4, 5);
	//建立Line类的对象
	Line line(myp1, myp2);
	//利用赋值构造函数建立一个新对象
	Line line2(line);
	cout << "The length of the line is :";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is ：";
	cout << line2.getLen() << endl;
}