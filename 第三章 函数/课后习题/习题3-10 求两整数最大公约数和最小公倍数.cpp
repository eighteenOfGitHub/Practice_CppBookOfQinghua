//习题3-10 求两整数最大公约数和最小公倍数
#include<iostream>
using namespace std;

int min(int a, int b)
{
	if (a == b) {return a; }
	int i;
	i = (a > b) ? a : b;
	while (i % a != 0 || i % b != 0)
	{
		i++;
	}
	//for(;i%a!=0||i%b!=0;i++){} i在for的循环内改变，循环外的i没有改变
	return i;
}

int max(int a, int b)
{
	if (a == b) { return a; }
	int i;
	i = (a < b) ? a : b;
	while (a % i != 0 || b % i != 0)
	{
		i--;
	}
	//for (; a % i != 0 || b % i != 0; i--) {}
	return i;
}

int main()
{
	int a, b,c,d;
	cin >> a >> b;
	c = max(a, b);
	d = min(a, b);
	cout << "The greatest common divisor is " << c<< "\nThe lowest common multiple is " <<d << endl;
	return 0;
}