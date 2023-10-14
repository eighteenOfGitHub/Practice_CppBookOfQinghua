#include<iostream>
using namespace std;

class Point   //Point�ඨ��
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }   //���캯��
	Point(const Point& p) :x(p.x), y(p.y) { count++; }   //���ƹ��캯��
	~Point() { count--; }   //��������

	int getX() const { return x; }
	int getY() const { return y; }
	
	//�����̬���ݳ�Ա
	static void showCount()
	{
		cout << "   Object count = " << count << endl;
	}
private:
	int x, y;
	static int count;   //��̬���ݳ�Ա����
};

int Point::count = 0;   //��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�

int main()
{
	//����һ��ָ������ָ�룬ָ����ľ�̬��Ա����
	//��������(*ָ����)() = ����::������
	void(*funcPtr)() = Point::showCount;

	Point a(4, 5);
	cout << "Point A: " << a.getX() << ", " << a.getY();
	funcPtr();   //������������ֱ��ͨ��ָ����ʾ�̬������Ա

	Point b(a);
	cout << "Point B: " << b.getX() << ", " << b.getY();
	funcPtr();   //������������ֱ��ͨ��ָ����ʾ�̬������Ա

	return 0;
}