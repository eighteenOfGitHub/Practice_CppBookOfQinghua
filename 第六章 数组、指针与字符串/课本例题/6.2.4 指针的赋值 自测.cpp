//6.2.4 指针的赋值 自测
#include<iostream>
using namespace std;

int main()
{
	int a[10]={3,2};
	int b=8,c=0x70fdd0,d=0xf; 
	int *ptr=a;
	int *p;
	cout<<ptr<<endl;    //输出数组a的一个元素的地址 
	cout<<*ptr<<endl;  //输出数组a的第一个元素 
	cout<<&b<<endl;   //输出b的地址 
	cout<<b<<endl;    
	
	cout<<c<<"   "<<d<<endl; //输出十六进制数0x， 
//	cout<<*c<<endl;我是这样理解的： c不是指针，没有定义其为指针，即使有地址的信息，但他不执行指针的功能，因为他是个整数 
	*p=0x70fdd0;
	cout<<p<<endl;
	return 0;
}
