//习题7 - 11
#include<iostream>
using namespace std;

class BaseClass
{
public:
	void fn1() { cout << "调用基类函数 fn1()" << endl; }
	void fn2() { cout << "调用基类函数 fn2()" << endl; }
};

class DerivedClass: public BaseClass
{
public:
	void fn1() { cout << "调用派生类函数 fn1()" << endl; }
	void fn2() { cout << "调用派生类函数 fn2()" << endl; }
};

int main() {
	DerivedClass d1;
	BaseClass* pBaseClass = &d1;
	DerivedClass* pDerivedClass = &d1;
	d1.fn1();
	d1.fn2();
	pBaseClass->fn1();
	pBaseClass->fn2();
	pDerivedClass->fn1();
	pDerivedClass->fn2();
	return 0;
}