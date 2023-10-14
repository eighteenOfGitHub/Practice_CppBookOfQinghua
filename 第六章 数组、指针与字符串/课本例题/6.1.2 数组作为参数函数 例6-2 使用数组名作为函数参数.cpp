//6.1.2 数组作为参数函数 例6-2 使用数组名作为函数参数
#include<iostream>
using namespace std;

//计算二维数组a每行元素的值的和，nRow是行数
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
	//声明并初始化数组
	int table[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	//输出数组元素
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