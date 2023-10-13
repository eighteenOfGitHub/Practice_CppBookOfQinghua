//ϰ��8 - 8  BaseClass��
#include<iostream>
using namespace std;

class BaseClass
{
public:
	virtual void fun1() {cout << "BaseClass::fun1()" << endl;}
	void fun2() { cout << "BaseClass::fun2()" << endl; }
};

class DerivedClass:public BaseClass
{
public:
	virtual void fun1() { cout << "DerivedClass::fun1()" << endl; }
	void fun2() { cout << "DerivedClass::fun2()" << endl; }
};

int main()
{
	DerivedClass der;
	DerivedClass* pder = &der;
	BaseClass* pbas = &der;
	//����ָ��
	pbas->fun1();
	pbas->fun2();
	//������ָ��
	pder->fun1();
	pder->fun2();
	return 0;
}