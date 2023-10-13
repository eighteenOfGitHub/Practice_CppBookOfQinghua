//4.3.2 eg4.2
#include<iostream> 
using namespace std;

class point                                  //point ��Ķ��� 
{                                             
	public:                                  //�ⲿ�ӿ�
		point(int xx=0,int yy=0)             //���캯�� 
		{
			x=xx;
			y=yy;
		}
		point(point &p);                     //���ƹ��캯�� 
		int getx(){return x;}
		int gety(){return y;}
	private:                                 //˽������ 
		int x,y;
};

//��Ա������ʵ�� 
point::point(point &p)
{
	x=p.x;
	y=p.y;
	cout<<"calling the copy constructor"<<endl;
}

//�β�Ϊpoint�����ĺ��� 
void fun1(point p){cout<<p.getx()<<endl;}

//����ֵΪpoint�����ĺ��� 
point fun2()
{
	point a(1,2);
	return a;
}

//������ 
int main()
{
	point a(4,5);          //��һ������a 
	point b=a;             //���һ����a��ʼ��b����һ�ε��ø��ƹ��캯�� 
	cout<<b.getx()<<endl;  
	fun1(b);               //�����������b��Ϊfun1��ʵ�Ρ��ڶ��ε��ø��ƹ��캯�� 
	b=fun2();              //������������ķ���ֵ������󣬺�������ʱ�����ø��ƹ��캯�� 
	cout<<b.getx()<<endl;
	return 0;
}

/*
calling the copy constructor
4 
calling the copy constructor
4
calling the copy constructor
1
*/
