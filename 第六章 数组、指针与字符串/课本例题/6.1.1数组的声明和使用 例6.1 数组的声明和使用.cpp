//6.1.1�����������ʹ�� ��6.1 �����������ʹ��
#include<iostream>
using namespace std;

int main()
{
	int a[10]={}, b[10]={};
	for (int i = 0; i < 10; i++)
	{
		//a���Ǵ�-1������ 
		a[i] = i * 2 - 1;
		//b����a�鵹���� 
		b[10 - i - 1] = a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "   ";
		cout << "b[" << i << "]=" << b[i] << endl;
	}
	return 0;
}
