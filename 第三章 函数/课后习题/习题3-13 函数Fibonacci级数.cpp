//习题3-13 函数Fibonacci级数
#include<iostream>
using namespace std;

int Fibonacci(int n)
{
	if (n == 1)return 1;
	else if (n == 2) return 1;
	int a;
	a = Fibonacci(n-2) + Fibonacci(n - 1);
	return a;
}

int main()
{
	int n, F;
	cout << "please enter n(n>2) ";
	cin >> n;
	F = Fibonacci(n);
	cout << "the Fn is " << F << endl;
	return 0;
}