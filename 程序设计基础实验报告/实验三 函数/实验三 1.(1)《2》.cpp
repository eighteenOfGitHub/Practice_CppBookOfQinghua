//ÊµÑéÈý 1.(1)¡¶2¡·
#include<iostream>
#include<cmath>
using  namespace std;

double sum(double x)
{
	double f;
	f=1+(x*x+x+1)/(x+1);
	return f;
}

double F(double x)
{
	double f;
	f=sqrt(sum(x));
	return f;
} 

int main()
{
	double f,x;
	cout<<"tip: x!=1"<<endl;
	cin>>x;
	f=F(x);
	cout<<f<<endl;
	return 0;
} 
