//ϰ��3-12  ��1�ӵ�n���õݹ飩
#include<iostream>
using namespace std;

int imagination(int n)
{
	if (n == 1)return 1;
	int a;
	a = n + imagination(n - 1);
	return a;
}

int main()
{
	int n,s;
	cout << "please enter n ";
	cin >> n;
	s = imagination(n);
	cout << "the sum is " << s << endl;
	return 0;
}