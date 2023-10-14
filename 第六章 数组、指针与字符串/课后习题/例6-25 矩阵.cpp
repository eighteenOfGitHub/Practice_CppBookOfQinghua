//例6 - 25 矩阵
#include<iostream>
using namespace std;

void transpose(int* p)
{
	int temp[3][3];
	//设置临时矩阵
	int m = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp[i][j] = *(p + m);
			m++;
		}
	}
	//矩阵转置
	m = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			*(p+m) = temp[j][i];
			m++;
		}
	}
}

int main()
{
	//声明整数数组
	int array[3][3];
	//初始化数组
	cout << "请输入矩阵元素：\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	}
	//输出初始矩阵
	cout << "初始矩阵为：\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	//进入转置函数，进行矩阵转置
	transpose(&array[0][0]);
	//输出转置矩阵
	cout << "转置后的矩阵为：\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	return 0;
}