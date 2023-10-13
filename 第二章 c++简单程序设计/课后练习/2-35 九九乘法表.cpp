//2 - 35 ¾Å¾Å³Ë·¨±í
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int z = i * j;
			cout << i << "*" << j << "=" << z << "\t";
		}
		cout << "\n";
	}
	return 0;
}