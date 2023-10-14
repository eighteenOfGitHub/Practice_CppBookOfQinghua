//6.2.4 指针的赋值 例6-6 void类型指针的使用
#include<iostream>
using namespace std;

int main()
{
	//void voidobject; 错，不能声明void类型的变量
	void *pv;   //对，可以声明void类型的指针
	int i = 5;
	//void类型指针直向整数变量 
	pv =&i;
	//void类型指针赋值给int类型指针
	int *pint = static_cast<int*>(pv) ;
	cout<<"* pint = "<<*pint <<endl; 
	return 0;
 } 
