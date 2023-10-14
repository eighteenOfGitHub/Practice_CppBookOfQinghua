#pragma once
//5.6.1 多文件结构和编译预处理命令 例5 - 10 具有静态数据、函数成员的Point类，多文件组织
//文件1 类的定义 Point.h

class Point   //类的定义
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {}
	Point(const Point& p);
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	static void showCount();   //静态函数成员
private:   //私有成员函数
	int x, y;
	static int count;   //静态数据成员
};