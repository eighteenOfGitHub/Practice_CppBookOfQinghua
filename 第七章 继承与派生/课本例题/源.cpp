#include<iostream>
using namespace std;


class Base0
{
public:
	Base0(int var):var0(var)
	{
		cout << "Base0 类构造函数调用" << endl;
	}
	int var0;
	void fun0()
	{
		cout << "member of Base0" << endl;
	}
};

class Base1:virtual public Base0
{
public:
	Base1(int var) :Base0(var)
	{
		cout << "Base1 类构造函数调用" << endl;
	}
	int var1;
};

class Base2 :virtual public Base0
{
public:
	Base2(int var) :Base0(var) 
	{
		cout << "Base2 类构造函数调用" << endl;
	}
	int var2;
};

class Derived :public Base1,public Base2
{
public:
	Derived(int var):Base0(var), Base1(var), Base2(var) 
	{
		cout << "Derived 类构造函数调用" << endl;
	}
	int var;
	void fun()
	{
		cout << "member of Derived" << endl;
	}
};

int main()
{
	Derived d(1);
	d.var = 2;
	d.fun();
	return 0;
}