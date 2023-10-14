//6.2.11 对象指针 例6-12 使用指针来访问Point类的对象
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
	Point a(4, 5);   //定义并初始化对象a
	Point* p1 = &a;   //定义对象指针，用a的指针将其初始化
	cout << p1->getx() << endl;   //利用指针访问对象成员
	cout << a.getx() << endl;    //利用对象名访问成员对象
	return 0;
}