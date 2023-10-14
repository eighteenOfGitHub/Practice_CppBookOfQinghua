//6.2.11 对象指针 例6-13 访问对象的公有成员函数的不同方式
#include<iostream>
using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {	}
	int getx() const { return x; }
	int gety() const { return y; }
private:
	int x, y;
};

int main()
{
	Point a(4, 5);   //定义对象a
	Point* p1 = &a;   //定义对象指针并初始化
	int (Point:: * funcPtr)() const = &Point::getx;   //定义成员函数指针并初始化

	cout << (a.*funcPtr)() << endl;    //（1）使用成员函数指针和对象名访问成员函数
	cout << (p1->*funcPtr)() << endl;   //（2）使用成员函数指针和对象指针访问成员函数
	cout << a.getx() << endl;   //（3）适用对象名访问成员函数
	cout << p1->getx() << endl;   //（4）使用对象指针访问成员函数

	return 0;
}

//总结：
//定义成员函数并初始化
//类型说明符 (类名::*指针名)() = &类名::函数名；
//
//利用指针调用成员函数
//(对象名.*类成员指针名)(参数表)
//(对象指针名->*类成员指针名)(参函数表)