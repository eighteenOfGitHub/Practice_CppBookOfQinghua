//6.2.4 ָ��ĸ�ֵ �Բ�
#include<iostream>
using namespace std;

int main()
{
	int a[10]={3,2};
	int b=8,c=0x70fdd0,d=0xf; 
	int *ptr=a;
	int *p;
	cout<<ptr<<endl;    //�������a��һ��Ԫ�صĵ�ַ 
	cout<<*ptr<<endl;  //�������a�ĵ�һ��Ԫ�� 
	cout<<&b<<endl;   //���b�ĵ�ַ 
	cout<<b<<endl;    
	
	cout<<c<<"   "<<d<<endl; //���ʮ��������0x�� 
//	cout<<*c<<endl;�����������ģ� c����ָ�룬û�ж�����Ϊָ�룬��ʹ�е�ַ����Ϣ��������ִ��ָ��Ĺ��ܣ���Ϊ���Ǹ����� 
	*p=0x70fdd0;
	cout<<p<<endl;
	return 0;
}
