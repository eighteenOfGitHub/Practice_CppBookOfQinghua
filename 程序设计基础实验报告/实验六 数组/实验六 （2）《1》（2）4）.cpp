//ÊµÑéÁù £¨2£©¡¶1¡·£¨2£©4£©
#include<iostream>
using namespace std;

int main()
{
	char a[5][6];
	for (int i = 0; i < 6; i++)
		a[0][i] = 'A' + i;
	for (int i = 1; i < 5; i++)
	{
		a[i][0] = 'A' + i;
		for (int j = 1; j < 6; j++)
		{
			a[i][j] = a[i][j-1] + j;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout.width(3);
			cout << a[i][j];
		}
		cout << "\n" << endl;
	}
	return 0;
}