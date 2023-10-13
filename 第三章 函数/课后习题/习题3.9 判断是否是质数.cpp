//习题3.9 判断是否是质数
#include<iostream>
using namespace std;

bool prime(int a)
{
	if (a % 2 == 0 && a != 2) return 0;
	else if (a == 2) return 1;
	else
	{
		for (int i = 3; i <= a/2; i += 2)
		{
			if (a % i == 0) return 0;
		}
		return 1;
	}
}

int main()
{
	unsigned a;
	cin >> a;
	bool b;
	b= prime(a);
	if (b == 1)cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}