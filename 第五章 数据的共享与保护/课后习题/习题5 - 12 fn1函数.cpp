//ϰ��5 - 12 fn1����
#include<iostream>
using namespace std;

//ȫ�ֱ���
static int n = 0;

void fn1()
{
	//֤����������
	cout << "fn1����" << endl;
	n++;
}

int main()
{
	//���ú���ʮ��
	for (int i = 1; i <= 10; i++)
		fn1();
	cout << "n:" << n << endl;
	return 0;
}