//ϰ��4-20 ������Complex
#include<iostream>
using namespace std;

class Complex
{
public:
	//���캯��
	Complex(double rr=0, double cc=0) {r = rr; c = cc;}
	//�������캯��
	Complex(Complex& com)
	{
		r = com.r;
		c = com.c;
	}
	//��ӱ���
	void add(Complex c2)
	{
		r += c2.r;
		c += c2.c;
	}
	//�����������c1
	inline void show(){	cout << r << "+" << c << "i" << endl;}
private:
	double r, c;
};

int main()
{
	Complex c1(3, 5);
	Complex c2 = 4.5;
	c1.add(c2);
	c1.show();
	return 0;
}