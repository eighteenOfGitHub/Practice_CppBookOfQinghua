//ʵ������2����2��
#include<iostream>
using namespace std;

int main()
{
	int a[15];
	srand((int)time(NULL));
	for (int i = 0; i < 15; i++)
		a[i] = rand() % 50;
	cout << "ԭ����Ϊ�� \n";
	for (int i = 0; i < 15; i++)
		cout << a[i] << " ";
	cout << "\n";
	
	////ð������	
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

	//cout << "���������С��������: \n";
	//for (int i = 0; i < 15; i++)
	//	cout << a[i] << " ";

	//��������
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

	cout << "���������С��������: \n";
	for (int i = 0; i < 15; i++)
		cout << a[i] <<" ";
	return 0;
}