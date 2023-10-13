//3.1 ��д������pi��ֵ
#include<iostream>
using namespace std;
double arctan(double x)
{
	double sqr = x * x;
	double r = 0;
	double e = x;
	int i = 1;
	while (e / i > 1e-15)
	{
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;
		e *= sqr;
		i += 2;
	}
	return r;
}
int main()
{
	double a = 16.0 * arctan(1 / 5.0);
	double b = 4.0 * arctan(1 / 239.0);
	/*ע�⣺��Ϊ����������ȡ�����������д����1/5������1/5.0���������0*/
	cout << "pi=" << a - b << endl;
	return 0;
}