#include<iostream>
using namespace std;

class Point   //Point类定义
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }   //构造函数
	Point(const Point& p) :x(p.x), y(p.y) { count++; }   //复制构造函数
	~Point() { count--; }   //析构函数

	int getX() const { return x; }
	int getY() const { return y; }
	
	//输出静态数据成员
	static void showCount()
	{
		cout << "   Object count = " << count << endl;
	}
private:
	int x, y;
	static int count;   //静态数据成员声明
};

int Point::count = 0;   //静态数据成员定义和初始化，使用类名限定

int main()
{
	//定义一个指向函数的指针，指向类的静态成员函数
	//数据类型(*指针名)() = 类名::函数名
	void(*funcPtr)() = Point::showCount;

	Point a(4, 5);
	cout << "Point A: " << a.getX() << ", " << a.getY();
	funcPtr();   //输出对象个数，直接通过指针访问静态函数成员

	Point b(a);
	cout << "Point B: " << b.getX() << ", " << b.getY();
	funcPtr();   //输出对象个数，直接通过指针访问静态函数成员

	return 0;
}