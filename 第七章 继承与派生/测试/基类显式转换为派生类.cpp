#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "base 类构造函数" << endl;
		n = 0;
	}
	int n;
};

class Derived:public Base
{
public:
	Derived()
	{
		cout << "Derived 类构造函数" << endl;
		n = 0;
		m = 0;
	}
	Derived(Base &base)
	{
		cout << "Derived 类有参构造函数" << endl;
		m = 0;
		n = base.n;
	}
	int m;
};

void text01()
{
	Base b;
	Derived d = static_cast<Derived>(b);
}


int main()
{
	text01();


	return 0;
}
