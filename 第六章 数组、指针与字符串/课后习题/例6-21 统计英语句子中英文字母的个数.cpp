//��6 - 21 ͳ��Ӣ�������Ӣ����ĸ�ĸ���
#include<iostream>
#include<string>
using namespace std;

int count(char* p)
{
	int num = 0;
	for (int i = 0; p[i]; i++)
	{
		if ( (p[i] >= 'a' && p[i] <= 'z') 
		     || (p[i] >= 'A' && p[i] <= 'Z') )
			num++;
	}
	return num;
}

int main()
{
	//�ַ�������
	string sentence;
	//��ʾ�û�����Ӣ�����
	cout << "������һ��Ӣ����ӣ�\n";
	//��ȡ���е��ַ���
	getline(cin, sentence);
	//��ȡ�ַ��������ַ���ַ
	char* ptr = &sentence[0];
	//���Ӣ����ĸ����
	cout << "�����й��� " << count(ptr) << " ����ĸ��" << endl;

	return 0;
}