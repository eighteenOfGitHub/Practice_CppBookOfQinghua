//2-28 菜单程序（if…else语句）
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
			cout << "数据已增加" << endl; continue;
		}
		if (x == 'D')
		{
			cout << "数据已删除" << endl; continue;
		}
		if (x == 'S')
		{
			cout << "数据已排序" << endl; continue;
		}
		if (x == 'Q') break;
	}
	return 0;
}