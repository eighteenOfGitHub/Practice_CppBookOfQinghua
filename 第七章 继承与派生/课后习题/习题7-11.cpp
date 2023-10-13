//ϰ��7 - 11
#include<iostream>
using namespace std;

class BaseClass
{
public:
	void fn1() { cout << "���û��ຯ�� fn1()" << endl; }
	void fn2() { cout << "���û��ຯ�� fn2()" << endl; }
};

class DerivedClass: public BaseClass
{
public:
	void fn1() { cout << "���������ຯ�� fn1()" << endl; }
	void fn2() { cout << "���������ຯ�� fn2()" << endl; }
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