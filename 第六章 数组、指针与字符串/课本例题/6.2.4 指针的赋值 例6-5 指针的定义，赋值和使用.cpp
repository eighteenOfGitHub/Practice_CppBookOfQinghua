//6.2.4 ָ��ĸ�ֵ ��6-5 ָ��Ķ��壬��ֵ��ʹ��
#include<iostream>
using namespace std;

int main()
{
	//����int����i 
	int i;
	//ȡi�ĵ�ַ��ptr
	int *ptr = &i;
	//int����i����ֵ
	i=10;
	//���int������ֵ
	cout<<"i = "<<i<<endl; 
	//���int����ָ����ָ��ַ������ 
	cout<<"* ptr = "<< *ptr <<endl; 
	return 0;
 } 
