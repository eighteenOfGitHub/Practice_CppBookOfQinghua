//ϰ��2 - 27 �����ȼ�
#include<iostream>
using namespace std;
int main()
{
	int a;
	input:cin >> a;
	if (a >= 90 && a <= 100)cout << "��\n";
	else if (a >= 80 && a < 90)cout << "��\n"; 
	else if (a >= 60 && a < 80)cout << "��\n";
	else if (a >= 0 && a < 60)cout << "��\n";
	else
	{
		cout << "your score is not ture,the score is from 0 to100,please input again.\n";
		goto input;
	}
	return 0;
}