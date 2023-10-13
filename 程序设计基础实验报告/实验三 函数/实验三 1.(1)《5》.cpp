//สตั้ศý 1.(1)กถ5กท
#include<iostream>
#include<cmath>
using  namespace std;

double F(double x)
{
	double f;
	f=log10(1+sqrt(1+x*x));
	return f;
} 

int main()
{
	double f,x;
	cin>>x;
	f=F(x);
	cout<<f<<endl;
	return 0;
} 
