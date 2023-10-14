//��6 - 25 ����
#include<iostream>
using namespace std;

void transpose(int* p)
{
	int temp[3][3];
	//������ʱ����
	int m = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp[i][j] = *(p + m);
			m++;
		}
	}
	//����ת��
	m = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			*(p+m) = temp[j][i];
			m++;
		}
	}
}

int main()
{
	//������������
	int array[3][3];
	//��ʼ������
	cout << "���������Ԫ�أ�\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	}
	//�����ʼ����
	cout << "��ʼ����Ϊ��\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	//����ת�ú��������о���ת��
	transpose(&array[0][0]);
	//���ת�þ���
	cout << "ת�ú�ľ���Ϊ��\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	return 0;
}