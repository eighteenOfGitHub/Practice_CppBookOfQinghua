//5.6.1 ���ļ��ṹ�ͱ���Ԥ�������� ��5 - 10 ���о�̬���ݡ�������Ա��Point�࣬���ļ���֯
//�ļ�2 ���ʵ�� Point.cpp

#include"Point.h"
#include<iostream>
using namespace std;

int Point::count = 0;   //ʹ��������ʼ����̬���ݳ�Ա
Point::Point(const Point& p) :x(p.x), y(p.y) { count++; }   //���ƹ��캯����
void Point::showCount()
{
	cout <<"   Object count=" << count << endl;
}
