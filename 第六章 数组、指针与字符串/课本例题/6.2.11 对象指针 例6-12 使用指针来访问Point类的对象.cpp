//6.2.11 ����ָ�� ��6-12 ʹ��ָ��������Point��Ķ���
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
	Point a(4, 5);   //���岢��ʼ������a
	Point* p1 = &a;   //�������ָ�룬��a��ָ�뽫���ʼ��
	cout << p1->getx() << endl;   //����ָ����ʶ����Ա
	cout << a.getx() << endl;    //���ö��������ʳ�Ա����
	return 0;
}