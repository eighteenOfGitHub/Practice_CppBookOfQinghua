//例8 - 4 虚函数成员
#include<iostream>
using namespace std;

class Base1
{
public:
	//虚函数
	virtual void display() const {
		cout << "Base1::dispaly()" << endl;
	}
	////不是虚函数
	//   void display() const {
	//	cout << "Base1::dispaly()" << endl;
	//}
};
class Base2 :public Base1
{
public:
	virtual void display() const {   //根据系统规则，自动确定为虚函数
		cout << "Base2::dispaly()" << endl;
	}
};

class Derived : public Base2
{
public:
	 void display() const {
		cout << "Derived::dispaly()" << endl;
	}
};

void fun(Base1* ptr)
{
	ptr->display();
}

int main()
{
	Base1 base1;
	Base2 base2;
	Derived derived;
	fun(&base1);
	fun(&base2);
	fun(&derived);

	return 0;
}

//虚函数结果
//Base1::dispaly()
//Base2::dispaly()
//Derived::dispaly()
//不是虚函数结果
//Base1::dispaly()
//Base1::dispaly()
//Base1::dispaly()

