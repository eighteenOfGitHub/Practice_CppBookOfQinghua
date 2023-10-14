//6.2.4 指针的赋值 例6-5 指针的定义，赋值和使用
#include<iostream>
using namespace std;

int main()
{
	//定义int型数i 
	int i;
	//取i的地址给ptr
	int *ptr = &i;
	//int型数i赋初值
	i=10;
	//输出int型数的值
	cout<<"i = "<<i<<endl; 
	//输出int型数指针所指地址的内容 
	cout<<"* ptr = "<< *ptr <<endl; 
	return 0;
 } 
