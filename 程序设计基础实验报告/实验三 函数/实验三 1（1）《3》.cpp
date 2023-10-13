//ÊµÑéÈý 1£¨1£©¡¶3¡·
#include<iostream>
#include<cmath>
using namespace std;

double F(double x)
{
	double f;
	f=sin(x)+cos(x)+1/tan(x);
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
