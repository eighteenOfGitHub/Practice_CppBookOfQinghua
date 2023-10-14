//6.3 动态内存分配 例6-18 动态数组类
#include<iostream>
#include<cassert>
using namespace std;

//点类
class Point
{
public:
	Point() :x(0), y(0)
	{
		cout << "Default Constructor called." << endl;
	}
	Point(int x,int y):x(x),y(y)
	{
		cout << "Constructor called." << endl;
	}
	~Point()
	{
		cout << "Destructor called." << endl;
	}

	int getX() const { return x; }
	int getY() const { return y; }

	void move(int newx, int newy)
	{
		x = newx;
		y = newy;
	}
private:
	int x, y;
};

//动态数组类
class ArrayOfPoints
{
public:
	ArrayOfPoints(int size) :size(size)
	{
		points = new Point[size];
	}
	~ArrayOfPoints()
	{
		cout << "Deleting..." << endl;
	}

	//获得下标为index的数组元素
	Point& element(int index)
	{
		assert(index >= 0 && index < size);  //如果数组下标越界，程序中断
		return points[index];
	}

private:
	Point* points;     //指向动态数组首地址
	int size;          //数组大小
};

int main()
{
	int count;
	cout << "Please enter the count of point: ";
	cin >> count;
	ArrayOfPoints points(count);    //创建对象数组
	points.element(0).move(5,0);    //访问数组元素的成员
	points.element(1).move(15, 20); //访问数组元素的成员
	return 0;
}