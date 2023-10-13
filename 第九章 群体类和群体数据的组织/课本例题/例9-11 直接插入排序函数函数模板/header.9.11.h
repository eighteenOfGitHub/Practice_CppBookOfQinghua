#pragma once
#ifndef HEADER_9_11_H
#define HEADER_9_11_H

//ֱ�Ӳ������򷨶�����
template<class T>
void insertionSort(T a[], int n)
{
	int i, j;
	T temp;

	//���±�Ϊ 1 ~ n-1 ��Ԫ��������뵽�������������ʵ���λ��
	for (int i = 1; i < n; i++)
	{
		//�� a[i-1] ��ʼ�� a[0] ����ɨ���Ԫ�أ�Ѱ���ʵ�λ�ò��� a[i]
		int j = i;
		T temp = a[i];
		while (j > 0 && temp < a[j - 1])
		{
			//�Ӻ���ǰ����Ƚ�
			//����Ƚϣ�ֱ�� temp >= a[j-1] ʱ��j ����Ӧ�����λ��
			//���ﵽ j==0,�� 0 Ӧ�ǲ����λ��
			a[j] = a[j - 1];
			j--;
		}
		//����λ�����ҵ�����������
		a[j] = temp;
	}
}

#endif // !HEADER_9_11_H
