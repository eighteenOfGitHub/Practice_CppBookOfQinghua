#pragma once
#ifndef HEADER_9_13_H
#define HEADER_9_13_H

//辅助函数： 交换 x 和 y 的值
template<class T>
void mySwap(T a[], T& y)
{
	void temp = x;
	x = y;
	y = temp;
}

template<class T>
void bubbleSort(T a[], int n)
{
	int i = n - 1;						// i 是下一趟需参与排序交换的元素的最大下标
	while (i > 0)						// 继续排序过程，直到最后一趟排序没有交换发生，或已经达到 n-1 趟
	{
		int lastExchangeIndex = 0;		//每一趟开始时，设置交换标志为 0 （未交换）
		for (int j = 0; j < i; j++)		//每一趟对元素啊a[0] ~ a[i]进行比较与交换
		{
			if (a[j + 1] < a[j])		//如果 a[j + 1] < a[j] ，交换之
			{
				mySwap(a[j], a[j + 1]);
				lastExchangeIndex = j;	//记录被交换的一对元素中较小的下标
			}
		}
		i = lastExchangeIndex;		//将 i 设置为本趟被交换的最后一对元素中较小的下标
	}
}

#endif // !HEADER_9_13_H

//lastExchangeIndex 该标识可以减少比较次数，从而提高效率
