//5.6.1 ���ļ��ṹ�ͱ���Ԥ�������� ��5-10 ���о�̬���ݡ�������Ա��Point�࣬���ļ���֯
//�ļ�3  ������ 5-10.cpp

#include"Point.h"
#include<iostream>
using namespace std;

int main()
{
	Point a(4, 5);   //�������a���乹�캯����ʹcount��1
	cout << "Point A:" << a.getX() << "," << a.getY();
	Point::showCount();   //����������

	Point b(a);
	cout << "Point B:" << b.getX() << "," << b.getY();
	Point::showCount();   //����������
	
	return 0;
}