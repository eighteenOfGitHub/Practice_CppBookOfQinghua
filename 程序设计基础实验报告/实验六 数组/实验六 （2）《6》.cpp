//ʵ���� ��2����6��
#include<iostream>
using namespace std;
static int point = 0;

//�������
void getarray(int* p, int line)
{
	for (int i = 0; i < line; i++)
		cout << *(p+i) << " ";
	cout << endl;
}

//ԭ��
//�����жϴ�С
//������ȣ��������λ��
//����ȣ����������ʼ��ַ���������鳤�ȣ�ѭ���ж�
//middle����1����Ϊ���鳤��Ϊ2��3�����жϣ���ͷ��β��һ�Ų�
int getpoint(int* p, int randon, int len)
{
	int middle = len / 2;
	while (middle != 0)
	{
		if (middle == 1)
		{
			for (int i = 0; i < len; i++)
			{
				if (*(p + i) == randon)
				{
					return point - len / 2 + i;
				}
			}
			return -1;
		}
		if (len % 2 == 1)   //����Ϊ����
		{
			if (*(p + middle) == randon)
			{
				return point;
			}
			if (*(p + middle) < randon)
			{
				p += middle;   //���������׵�ַ
				point += middle / 2;
				len = len / 2 + 1;   //�������鳤��
				middle /= 2;
			}
			if (*(p + middle) > randon)
			{
				point -= middle / 2;
				len = len / 2 + 1;
				middle /= 2;
			}
		}
		if (len % 2 == 0)   //����Ϊż��
		{
			if (*(p + middle-1) == randon)
			{
				return point;
			}
			if (*(p + middle-1) < randon)
			{
				p += middle -1;
				point += middle / 2;
				len = len / 2 + 1;
				middle = len / 2;
			}
			if (*(p + middle-1) > randon)
			{
				point -= middle / 2;
				len /= 2;
				middle /= 2;
			}
		}
	}
	return -1;
}

int main()
{
	int a[10];

	//�����������
	const int len = sizeof(a) / sizeof(a[0]);
	srand((int)time(NULL));
	cout << "���鳤��Ϊ�� " << len << endl;
	for (int i = 0; i < len; i++)
	{
	main_again:a[i] = rand() % 30;
		for(int m = 0; i > 0 && m < i; m++)    //��ֹԪ���ظ�
		{
			for (int j = 0; j < i; j++)
			{
				if (a[j] == a[i]) 
					goto main_again;
			}
		}
	}
	
	//���ԭ����
	cout << "ԭ����Ϊ�� \n";
	getarray(&a[0], len);

	//��������
	for (int i = 0; i < len; i++)
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

	//������������
	cout << "��С��������: \n";
	getarray(&a[0], len);
	
	//����һ�������
	int randon = rand() % 30;
	cout << "�����Ϊ�� " << randon << endl;

	//���������,�������λ��
	point += len / 2;
	int main_point = getpoint(&a[0], randon, len);
	if (main_point == -1) { cout << "������û���������" << endl;}
	else{ cout << "�����λ������� " << main_point << " λ��" << endl; }
	
	return 0;
}
