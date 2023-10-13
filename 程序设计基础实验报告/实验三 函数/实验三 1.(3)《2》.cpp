//ÊµÑéÈý 1£¨3£©¡¶2¡·
#include<iostream>
using namespace std;

bool prime(int n)
{
	if (n == 2 || n == 3)return 1;
	else if (n % 2 == 0) return 0;
	else {
		for (int m = 3; m <= (n / 3); m+=2)
		{
			int a = n % m;
			if (a == 0) return 0;
		}
		return 1;
	}
}

int main()
{
	int x = 2000;
	int n = 0;
	for (int i = 2; i <= x; i++)
	{
		bool a = prime(i);
		if (a == 0)
		{
			n++;
		}
		if (a != 0)
		{
		    if (n >= 10)
			{
				for (; 1<=n-1 ;n--)
				{
					cout << i - (n-1) << " ";
				}
				cout << "\n\n";
		    }
			n = 0;
		}
	}
	return 0;
}