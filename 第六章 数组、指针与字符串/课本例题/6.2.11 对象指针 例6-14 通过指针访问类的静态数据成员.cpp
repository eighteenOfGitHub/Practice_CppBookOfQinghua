//6.2.11 ����ָ�� ��6-14 ͨ��ָ�������ľ�̬���ݳ�Ա
#include<iostream>
using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }   //���캯��
	Point(const Point& p) :x(p.x), y(p.y) { count++; }   //�������캯��
	~Point() { count--; }   //��������
	int getX()const { return x; }
	int getY()const { return y; }
	static int count;   //��̬���ݳ�Ա���������ڼ�¼��ĸ���
private:
	int x, y;
};

int Point::count = 0;   //��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main()
{
	int* ptr = &Point::count;   //����һ��int��ָ�룬ָ����ľ�̬���ݳ�Ա
	Point a(4, 5);
	cout << "Point A : " << a.getX() << "," << a.getY();
	cout << " Object count = " << *ptr << endl;   //ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա

	Point b(a);
	cout << "Point B : " << b.getX() << "," << b.getY();
	cout << " Object count = " << *ptr << endl;   //ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա

	return 0;
}

//�ܽ᣺
//����˵����* ָ���� = &����::��̬���ݳ�Ա��;