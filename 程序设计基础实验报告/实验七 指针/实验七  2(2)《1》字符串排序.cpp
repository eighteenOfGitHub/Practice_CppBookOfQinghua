//ʵ����  2(2)��1���ַ�������
#include<iostream>
#include<string>
using namespace std;

int main()
{
	//������������
	string a[3];
	string* p = &a[0];
	for (int i = 0; i < 3; i++)
	{
		cout << "������� " << i + 1 << " ���ַ����� ";
		cin >> *(p + i);
	}
	//ԭ�������
	cout << "ԭ����Ϊ��\n";
	for (int i = 0; i < 3; i++)
		cout << *(p + i) << " ";
	cout << endl;
	//ð������
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			int num = p->compare(*(p+i));   
			if (num>0)
			{
				string temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
	//������������
	cout << "���������Ϊ��\n";
	for (int i = 0; i < 3; i++)
		cout << *(p + i) << " ";
	cout << endl;
	return 0;
}