//实验一  2（2)《1》大写变小写
#include <iostream>
using namespace std;
void main()
{
	char ch;

	cin >> ch;
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
	ch = (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
	cout << ch << endl;
}
