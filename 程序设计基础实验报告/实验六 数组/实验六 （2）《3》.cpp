//ʵ���� ��2����3��
#include<iostream>
#include<vector>
using namespace std;

int factor(int* p, int* q);    //����������Ԫ����С��Լ��
int factor(int p, int* q);     //������������С��Լ����һ������Ԫ�ص���С��Լ������
int AllOfFactor(int* p, int n);//����������Ԫ�ص���С��Լ��

int multiple(int* p, int* q);    //����������Ԫ����󹫱���
int multiple(int p, int* q);     //������������󹫱�����һ������Ԫ�ص���󹫱�������
int AllOfMultiple(int* p, int n);//����������Ԫ�ص���󹫱���

int main()
{
	//��������
	cout << "�����������ĸ�����";
	int line;   //��������
	cin >> line;
	vector<int>a(line);
	cout << "\n�������������飺";
	for (int i = 0; i < line; i++)
		cin >> a[i];
	int* p = &a[0];

	//�����Լ������С�����������
	cout << "\n���Լ��Ϊ�� " << AllOfFactor(p, line);
	cout << "\n��С������Ϊ�� " << AllOfMultiple(p, line) << endl;
	return 0;
}

//�����Լ������ʵ��
int factor(int* p, int* q)
{
	int a, b, r;
	if (*p > *q) { a = *p; b = *q; }
	else if (*p < *q) { a = *q; b = *p; }
	else { return *p; }

	while ((r = a % b) != 0)
	{
		a = b;
		b = r;
	}
	return b;
}

int factor(int p, int* q)
{
	int a, b, r;
	if (p > *q) { a = p; b = *q; }
	else if (p < *q) { a = *q; b = p; }
	else { return p; }
	
	while ((r = a % b) != 0)
	{
		a = b;
		b = r;
	}
	return b;
}

int AllOfFactor(int* p, int n)
{
	int f = factor(p, p + 1);
	for (int i = 2; i < n; i++)
		f = factor(f, (p + i));
	return f;
}


//����С����������ʵ��
int multiple(int* p, int* q)
{
	int f = factor(p, q);
	return *p * *q / f;
}

int multiple(int p, int* q)
{
	int f = factor(p, q);
	return p * *q / f;
}

int AllOfMultiple(int* p, int n)
{
	int m = multiple(p, p + 1);
	for (int i = 2; i < n; i++)
		m = multiple(m, (p + i));
	return m;
}


//factor����
//multiple����