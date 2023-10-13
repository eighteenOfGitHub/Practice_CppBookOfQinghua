#include<iostream>
using namespace std;
double sum(int a, int b)
{
	int z;
	z = a + b;
	return z;
}
int main()
{
	int t,x,y;
	cin >> x >> y;
	t = sum(x, y);
	cout << t << endl;
	return 0;
}