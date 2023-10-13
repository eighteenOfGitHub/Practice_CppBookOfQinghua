//4.4.1 eg4-4  �������߶�Line��
#include<iostream>
#include<cmath>
using namespace std;

//point�ඨ��
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

//���ƹ��캯����ʵ��
Point::Point(Point& p)
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

//������
//Line��Ķ���
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

//��Ϻ����Ĺ��캯��
Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2)
{
	cout << "Calling cosntructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
//�����ĸ��ƹ��캯��
Line::Line(Line &l) :p1(l.p1), p2(l.p2)
{
	cout << "Calling the copy construtor of Line" << endl;
	len = l.len;
}
//������
int main()
{
	//����Point��Ķ���
	Point myp1(1, 1), myp2(4, 5);
	//����Line��Ķ���
	Line line(myp1, myp2);
	//���ø�ֵ���캯������һ���¶���
	Line line2(line);
	cout << "The length of the line is :";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is ��";
	cout << line2.getLen() << endl;
}