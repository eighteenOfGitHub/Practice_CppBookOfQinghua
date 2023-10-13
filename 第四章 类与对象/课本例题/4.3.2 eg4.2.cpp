//4.3.2 eg4.2
#include<iostream> 
using namespace std;

class point                                  //point 类的定义 
{                                             
	public:                                  //外部接口
		point(int xx=0,int yy=0)             //构造函数 
		{
			x=xx;
			y=yy;
		}
		point(point &p);                     //复制构造函数 
		int getx(){return x;}
		int gety(){return y;}
	private:                                 //私有数据 
		int x,y;
};

//成员函数的实现 
point::point(point &p)
{
	x=p.x;
	y=p.y;
	cout<<"calling the copy constructor"<<endl;
}

//形参为point类对象的函数 
void fun1(point p){cout<<p.getx()<<endl;}

//返回值为point类对象的函数 
point fun2()
{
	point a(1,2);
	return a;
}

//主程序 
int main()
{
	point a(4,5);          //第一个对象a 
	point b=a;             //情况一：用a初始化b，第一次调用复制构造函数 
	cout<<b.getx()<<endl;  
	fun1(b);               //情况二：对象b作为fun1的实参。第二次调用复制构造函数 
	b=fun2();              //情况三：函数的返回值是类对象，函数返回时，调用复制构造函数 
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
