//ϰ��8 - 5 Mammal��
#include<iostream>
using namespace std;

class Mammal
{
public:
	virtual void speak() const { cout << "�����"<<endl; }
};

class Dog :public Mammal
{
public:
	void speak() const { cout << "�޹���" << endl; }
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