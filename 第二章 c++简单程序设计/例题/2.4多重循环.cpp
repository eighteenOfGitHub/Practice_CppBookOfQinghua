//2.4多重循环（乘法表结果）
#include<iostream>
using namespace std;

void main()
{
	int i, j;
	for (i = 1; i <= 9; i++)//外循环控制输出多少行
	{
		for (j = 1; j <=9; j++)//内循环控制输出多少行
		{
			cout << i * j<<'\t';
		}
		cout << "\n";//换行
	}
}
