//6.2.7 ָ������ ��6-9  ��ά�������
#include<iostream>
using namespace std;

int main()
{
	int a[3][3]={{11,12,13},{21,22,23},{31,32,33}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<*(*(a+i)+j)<<" ";   //��������ά�����i��Ԫ��ֵ 
		cout<<endl;
	}
	return 0;
 } 
