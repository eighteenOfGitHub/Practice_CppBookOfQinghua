//实验六（2）《2》
#include<iostream>
using namespace std;

int main()
{
	int a[15];
	srand((int)time(NULL));
	for (int i = 0; i < 15; i++)
		a[i] = rand() % 50;
	cout << "原数组为： \n";
	for (int i = 0; i < 15; i++)
		cout << a[i] << " ";
	cout << "\n";
	
	////冒泡排序	
	//for (int i = 0; i < 15; i++)
	//{
	//	for (int j = 0; j<15-i-1; j++)
	//	{
	//		if (a[j] > a[j + 1])
	//		{
	//			int temp = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = temp;
	//		}
	//	}
	//}

	//cout << "插入排序从小到大排序: \n";
	//for (int i = 0; i < 15; i++)
	//	cout << a[i] << " ";

	//插入排序
	for (int i = 0; i < 15; i++) 
	{
		int temp = a[i];
		int j = i - 1;
		while (j >= 0 && temp < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}

	cout << "插入排序从小到大排序: \n";
	for (int i = 0; i < 15; i++)
		cout << a[i] <<" ";
	return 0;
}