//ÊµÑéÁù £¨2£©¡¶1¡·£¨2£©3£©
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a[6][6];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			a[i][j] = fabs(i - j) + 1;
		}
	}

	for (int i = 0; i < 6; i++)
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