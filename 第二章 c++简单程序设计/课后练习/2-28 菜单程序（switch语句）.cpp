//2-28 菜单程序（switch语句）
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
		case 'A':cout << "数据已增加" << endl; break;
		case 'D':cout << "数据已删除" << endl; break;
		case 'S':cout << "数据已排序" << endl; break;
		case 'Q':break;
		}
		break;
	}
	return 0;
}