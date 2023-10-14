//6.1.1数组的声明和使用 例6.1 数组的声明和使用
#include<iostream>
using namespace std;

int main()
{
	int a[10]={}, b[10]={};
	for (int i = 0; i < 10; i++)
	{
		//a组是从-1的奇数 
		a[i] = i * 2 - 1;
		//b组是a组倒过来 
		b[10 - i - 1] = a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "   ";
		cout << "b[" << i << "]=" << b[i] << endl;
	}
	return 0;
}
