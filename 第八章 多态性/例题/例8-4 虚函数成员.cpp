//��8 - 4 �麯����Ա
#include<iostream>
using namespace std;

class Base1
{
public:
	//�麯��
	virtual void display() const {
		cout << "Base1::dispaly()" << endl;
	}
	////�����麯��
	//   void display() const {
	//	cout << "Base1::dispaly()" << endl;
	//}
};
class Base2 :public Base1
{
public:
	virtual void display() const {   //����ϵͳ�����Զ�ȷ��Ϊ�麯��
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

//�麯�����
//Base1::dispaly()
//Base2::dispaly()
//Derived::dispaly()
//�����麯�����
//Base1::dispaly()
//Base1::dispaly()
//Base1::dispaly()

