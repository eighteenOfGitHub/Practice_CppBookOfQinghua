//3.1 ¿Î±¾Àý3.5
#include<iostream>
#include<cmath>
using namespace std;

double tsin(double x)
{
	double g = 0;
	double t = x;
	int n = 1;
	do
	{
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
	} while (fabs(t) >= 1e-10);
	return g;
}

int main()
{
	double k, r, s;
	cout << "input r ";
	cin >> r;
	cout << "input s ";
	cin >> s;
	if (r * r <= s * s)k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
	else k = asin(r * s) / 2;
	cout << k << endl;
	return 0;
}