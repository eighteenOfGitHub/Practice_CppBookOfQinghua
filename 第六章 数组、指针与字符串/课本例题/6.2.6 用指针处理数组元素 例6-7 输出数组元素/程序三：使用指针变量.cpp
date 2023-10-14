//6.2.6 用指针处理数组元素 例6-7 输出数组元素 
//程序三：使用指针变量 
#include<iostream>
using namespace std;

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	for(int *p=a;p<(a+10);p++)
		cout<<*p<<"   ";
	cout<<endl;	
	return 0;
 } 
