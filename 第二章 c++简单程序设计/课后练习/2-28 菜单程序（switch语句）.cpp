//2-28 �˵�����switch��䣩
#include <iostream>
using namespace std;
int main()
{
	cout << "Menu:A(dd) D(elcte) S(ort) Q(uit),Select one:" << endl;
	char A, D, S, Q, x;
	cin >> x;
	while (1)
	{
		switch (x)
		{
		case 'A':cout << "����������" << endl; break;
		case 'D':cout << "������ɾ��" << endl; break;
		case 'S':cout << "����������" << endl; break;
		case 'Q':break;
		}
		break;
	}
	return 0;
}