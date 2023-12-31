#pragma once
#ifndef HEADER_9_11_H
#define HEADER_9_11_H

//直接插入排序法对数组
template<class T>
void insertionSort(T a[], int n)
{
	int i, j;
	T temp;

	//将下标为 1 ~ n-1 的元素逐个插入到已排序序列中适当的位置
	for (int i = 1; i < n; i++)
	{
		//从 a[i-1] 开始向 a[0] 方向扫描各元素，寻找适当位置插入 a[i]
		int j = i;
		T temp = a[i];
		while (j > 0 && temp < a[j - 1])
		{
			//从后往前逐个比较
			//逐个比较，直到 temp >= a[j-1] 时，j 便是应插入的位置
			//若达到 j==0,则 0 应是插入的位置
			a[j] = a[j - 1];
			j--;
		}
		//插入位置已找到，立即插入
		a[j] = temp;
	}
}

#endif // !HEADER_9_11_H
