//5.2.2 动态生存期 例5-2 变量的生存期和可见性
#include<iostream>
using namespace std;
//i为全局变量，具有静态生存期
int i = 1;

void other()
{
	//a，b为静态局部变量，具有全局寿命，局部可见，只第一次进入时被初始化；
	static int a = 2;
	static int b;
	//c为局部变量，具有动态生存期，每次进入函数时都初始化
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
	b = a;
}

int main()
{
	//a为静态局部变量，具有全局寿命，局部可见
	static int a;
	//c为局部变量，具有动态生存期
	int b = -10;
	int c = 0;

	cout << "---MAIN---" << endl;
	cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
	c += 8;
	other();
	cout << "---MAIN---" << endl;
	cout << "i:" << i << " a:" << a <<  " b:" << b << " c:" << c << endl;
	i += 10;
	other();
	return 0;
}

//---MAIN---
//1 0 -10 0
//-- - OTHER-- -
//33 4 0 15
//---MAIN---
//33 0 -10 8
//-- - OTHER-- -
//75 6 4 15