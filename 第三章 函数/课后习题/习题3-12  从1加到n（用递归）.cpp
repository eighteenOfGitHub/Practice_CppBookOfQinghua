//习题3-12  从1加到n（用递归）
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