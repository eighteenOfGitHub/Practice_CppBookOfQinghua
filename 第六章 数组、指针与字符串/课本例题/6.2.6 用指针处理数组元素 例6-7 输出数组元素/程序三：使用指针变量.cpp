//6.2.6 ��ָ�봦������Ԫ�� ��6-7 �������Ԫ�� 
//��������ʹ��ָ����� 
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
