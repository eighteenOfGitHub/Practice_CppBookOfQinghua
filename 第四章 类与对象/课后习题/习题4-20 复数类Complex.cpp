//习题4-20 复数类Complex
#include<iostream>
using namespace std;

class Complex
{
public:
	//构造函数
	Complex(double rr=0, double cc=0) {r = rr; c = cc;}
	//拷贝构造函数
	Complex(Complex& com)
	{
		r = com.r;
		c = com.c;
	}
	//相加保存
	void add(Complex c2)
	{
		r += c2.r;
		c += c2.c;
	}
	//内联函数输出c1
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