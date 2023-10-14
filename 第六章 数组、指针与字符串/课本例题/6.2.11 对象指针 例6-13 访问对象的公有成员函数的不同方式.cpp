//6.2.11 ����ָ�� ��6-13 ���ʶ���Ĺ��г�Ա�����Ĳ�ͬ��ʽ
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
	Point a(4, 5);   //�������a
	Point* p1 = &a;   //�������ָ�벢��ʼ��
	int (Point:: * funcPtr)() const = &Point::getx;   //�����Ա����ָ�벢��ʼ��

	cout << (a.*funcPtr)() << endl;    //��1��ʹ�ó�Ա����ָ��Ͷ��������ʳ�Ա����
	cout << (p1->*funcPtr)() << endl;   //��2��ʹ�ó�Ա����ָ��Ͷ���ָ����ʳ�Ա����
	cout << a.getx() << endl;   //��3�����ö��������ʳ�Ա����
	cout << p1->getx() << endl;   //��4��ʹ�ö���ָ����ʳ�Ա����

	return 0;
}

//�ܽ᣺
//�����Ա��������ʼ��
//����˵���� (����::*ָ����)() = &����::��������
//
//����ָ����ó�Ա����
//(������.*���Աָ����)(������)
//(����ָ����->*���Աָ����)(�κ�����)