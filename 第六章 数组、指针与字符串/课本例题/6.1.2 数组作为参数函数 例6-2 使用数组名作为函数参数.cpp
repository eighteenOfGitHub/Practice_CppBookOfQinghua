//6.1.2 ������Ϊ�������� ��6-2 ʹ����������Ϊ��������
#include<iostream>
using namespace std;

//�����ά����aÿ��Ԫ�ص�ֵ�ĺͣ�nRow������
void rowSum(int a[][4], int nRow)
{
	for (int i = 0; i < nRow; i++)
	{
		for (int j = 1; j < 4; j++)
			a[i][0] += a[i][j];
	}
}

int main()
{
	//��������ʼ������
	int table[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	//�������Ԫ��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << table[i][j] << "\t";
		cout << endl;
	}
		rowSum(table, 3);
		for (int i = 0; i < 3; i++)
			cout << "the sum of row " << i << " is " << table[i][0] << endl;
		return 0;
}