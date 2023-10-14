//6.2.6 用指针处理数组元素 例6-7 输出数组元素 
//程序一：使用数组名和下标
#include<iostream>
using namespace std;

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	for(int i=0;i<=9;i++)
		cout<<a[i]<<"   ";
	cout<<endl;	
	return 0;
 } 
