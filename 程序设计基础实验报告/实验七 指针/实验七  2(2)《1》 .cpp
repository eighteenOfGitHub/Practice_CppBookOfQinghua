//实验七  2(2)《1》
#include<iostream>
using namespace std;

int main()
{
	//输入三个整数
	int a[3];
	int* p = &a[0];
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第 " << i + 1 << " 个数： ";
		cin >> a[i];
	}
	//原数组输出
	cout << "原数组为：\n";
	for (int i = 0; i < 3; i++)
		cout << *(p + i) << " ";
	cout << endl;
	//冒泡排序
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			if (*(p+j)> *(p + j + 1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
	//排序后数组输出
	cout << "排序后数组为：\n";
	for (int i = 0; i < 3; i++)
		cout << *(p + i) << " ";
	cout << endl;
	return 0;
}