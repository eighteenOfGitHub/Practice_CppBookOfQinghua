//6.2.4 ָ��ĸ�ֵ ��6-6 void����ָ���ʹ��
#include<iostream>
using namespace std;

int main()
{
	//void voidobject; ����������void���͵ı���
	void *pv;   //�ԣ���������void���͵�ָ��
	int i = 5;
	//void����ָ��ֱ���������� 
	pv =&i;
	//void����ָ�븳ֵ��int����ָ��
	int *pint = static_cast<int*>(pv) ;
	cout<<"* pint = "<<*pint <<endl; 
	return 0;
 } 
