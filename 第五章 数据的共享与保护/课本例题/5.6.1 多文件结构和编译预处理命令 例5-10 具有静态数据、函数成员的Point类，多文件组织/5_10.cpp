//5.6.1 多文件结构和编译预处理命令 例5-10 具有静态数据、函数成员的Point类，多文件组织
//文件3  主函数 5-10.cpp

#include"Point.h"
#include<iostream>
using namespace std;

int main()
{
	Point a(4, 5);   //定义对象a，其构造函数会使count增1
	cout << "Point A:" << a.getX() << "," << a.getY();
	Point::showCount();   //输出对象个数

	Point b(a);
	cout << "Point B:" << b.getX() << "," << b.getY();
	Point::showCount();   //输出对象个数
	
	return 0;
}