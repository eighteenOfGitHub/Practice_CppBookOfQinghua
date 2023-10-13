//Àı9 - 1 º¯ÊıÄ£°å
#include<iostream>
using namespace std;

template<typename T>
T abs(T x)
{
	return x > 0 ? x : -x;
}

int main()
{
	int n = -5;
	double a = -5.5;
	cout << abs(n) << endl;
	cout << abs(a) << endl;
	return 0;
}