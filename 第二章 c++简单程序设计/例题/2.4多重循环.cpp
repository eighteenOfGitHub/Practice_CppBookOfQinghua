//2.4����ѭ�����˷�������
#include<iostream>
using namespace std;

void main()
{
	int i, j;
	for (i = 1; i <= 9; i++)//��ѭ���������������
	{
		for (j = 1; j <=9; j++)//��ѭ���������������
		{
			cout << i * j<<'\t';
		}
		cout << "\n";//����
	}
}
