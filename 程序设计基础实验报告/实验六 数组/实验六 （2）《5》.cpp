//ʵ���� ��2����5��
#include<iostream>
using namespace std;
const int n = 16;

//�ַ�ת������
char trans(int n)
{
	if (n <= 9 && n >= 0) { return '0' + n; }
	if (n >= 10 && n <= 15) { return 'A' + n - 10; }
}

int main()
{
	int ten,quo=0,mod=0;
	cout << "�������ʮ������λ�� ";
	cin >> ten;
	char temp[8]{};
	int i = 0;
	//ʮ����ת��ʮ������
	do{
		quo = ten / n;
		mod = ten % n;
		temp[i] = trans(mod);
		i++;
		ten = quo;
	}while (ten!=0);
	//����ʮ������������
	int line = 0;
	for (int j = 0; temp[j] != '\0'; j++)
		line++;
	cout << "\nʮ������������Ϊ: " << line << endl;
	//���ʮ��������
	cout << "\nת�����ʮ��������Ϊ�� ";
	for (int j = line; j!=0;j--)
		cout << temp[j-1];
	return 0;
}