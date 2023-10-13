#pragma once
#ifndef HEADER_9_13_H
#define HEADER_9_13_H

//���������� ���� x �� y ��ֵ
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
	int i = n - 1;						// i ����һ����������򽻻���Ԫ�ص�����±�
	while (i > 0)						// ����������̣�ֱ�����һ������û�н������������Ѿ��ﵽ n-1 ��
	{
		int lastExchangeIndex = 0;		//ÿһ�˿�ʼʱ�����ý�����־Ϊ 0 ��δ������
		for (int j = 0; j < i; j++)		//ÿһ�˶�Ԫ�ذ�a[0] ~ a[i]���бȽ��뽻��
		{
			if (a[j + 1] < a[j])		//��� a[j + 1] < a[j] ������֮
			{
				mySwap(a[j], a[j + 1]);
				lastExchangeIndex = j;	//��¼��������һ��Ԫ���н�С���±�
			}
		}
		i = lastExchangeIndex;		//�� i ����Ϊ���˱����������һ��Ԫ���н�С���±�
	}
}

#endif // !HEADER_9_13_H

//lastExchangeIndex �ñ�ʶ���Լ��ٱȽϴ������Ӷ����Ч��
