//2-28 �˵�����if��else��䣩
#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		cout << "Menu:A(dd) D(elcte) S(ort) Q(uit),Select one:" << endl;
		char A, D, S, Q, x;
		cin >> x;
		if (x == 'A')
		{
			cout << "����������" << endl; continue;
		}
		if (x == 'D')
		{
			cout << "������ɾ��" << endl; continue;
		}
		if (x == 'S')
		{
			cout << "����������" << endl; continue;
		}
		if (x == 'Q') break;
	}
	return 0;
}