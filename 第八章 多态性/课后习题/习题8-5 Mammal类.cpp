//习题8 - 5 Mammal类
#include<iostream>
using namespace std;

class Mammal
{
public:
	virtual void speak() const { cout << "动物叫"<<endl; }
};

class Dog :public Mammal
{
public:
	void speak() const { cout << "修勾叫" << endl; }
};

void fun(Mammal* ptr)
{
	ptr->speak();
}

int main()
{
	Dog dog1;
	dog1.Mammal::speak();
	dog1.speak();
	fun(&dog1);
	return 0;
}