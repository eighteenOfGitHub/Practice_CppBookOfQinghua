//6.2.7 指针数组 例6-9  二维数组举例
#include<iostream>
using namespace std;

int main()
{
	int a[3][3]={{11,12,13},{21,22,23},{31,32,33}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<*(*(a+i)+j)<<" ";   //逐个输出二维数组第i行元素值 
		cout<<endl;
	}
	return 0;
 } 
