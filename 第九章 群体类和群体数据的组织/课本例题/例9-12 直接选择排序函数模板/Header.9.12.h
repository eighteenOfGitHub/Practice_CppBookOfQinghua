#pragma once
#ifndef HEADER_9_12_H
#define HEADER_9_12_H

//�������������� x �� y ��ֵ
template<class T>
void mySwap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

//��ѡ�񷨶����� a �� n��Ԫ�ؽ�������
template<class T>
void selectionSort(T a[], int n)
{
	for (int i = 0; i <= n; i++)
	{
		int temp = i;
		for (int j = i; j < n; j++)
		{
			if (a[temp] > a[j])
				temp = j;
		}
		mySwap(a[i],a[temp]);
	}
}





#endif // !HEADER_9_12_H
