#pragma once
//5.6.1 ���ļ��ṹ�ͱ���Ԥ�������� ��5 - 10 ���о�̬���ݡ�������Ա��Point�࣬���ļ���֯
//�ļ�1 ��Ķ��� Point.h

class Point   //��Ķ���
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {}
	Point(const Point& p);
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	static void showCount();   //��̬������Ա
private:   //˽�г�Ա����
	int x, y;
	static int count;   //��̬���ݳ�Ա
};