//ʵ���� ��2����4��
#include<iostream>
#include<string>
#include<cmath>
//#include<vector>
using namespace std;

int main()
{
	//��ʼ��ʮ��������������ʮ������
	string sixteen1;
	int ten = 0;
	cout << "����ʮ���������� ";
	cin >> sixteen1;
	int line = sixteen1.length();
	
	//ʮ��������ת��Ϊʮ������
	for (int i = line - 1; i >= 0; i--)
	{
		if (sixteen1[i] <= '9' && sixteen1[i] >= '0')
			ten += ((int)sixteen1[i] - 48) * pow(16, line - i - 1);
		if (sixteen1[i] <= 'F' && sixteen1[i] >= 'A')
			ten += ((int)sixteen1[i] - 55) * pow(16, line - i - 1);
	}
	//���ʮ������
	cout << "ʮ������Ϊ�� " << ten;
	return 0;
}