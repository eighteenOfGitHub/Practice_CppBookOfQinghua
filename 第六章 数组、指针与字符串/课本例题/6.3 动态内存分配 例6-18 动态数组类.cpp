//6.3 ��̬�ڴ���� ��6-18 ��̬������
#include<iostream>
#include<cassert>
using namespace std;

//����
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

//��̬������
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

	//����±�Ϊindex������Ԫ��
	Point& element(int index)
	{
		assert(index >= 0 && index < size);  //��������±�Խ�磬�����ж�
		return points[index];
	}

private:
	Point* points;     //ָ��̬�����׵�ַ
	int size;          //�����С
};

int main()
{
	int count;
	cout << "Please enter the count of point: ";
	cin >> count;
	ArrayOfPoints points(count);    //������������
	points.element(0).move(5,0);    //��������Ԫ�صĳ�Ա
	points.element(1).move(15, 20); //��������Ԫ�صĳ�Ա
	return 0;
}