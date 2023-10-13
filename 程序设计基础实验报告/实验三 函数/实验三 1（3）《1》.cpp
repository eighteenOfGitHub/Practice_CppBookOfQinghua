//ÊµÑéÈý 1£¨3£©¡¶1¡·
#include<iostream>
#include<cmath>
using namespace std;

double big(double a,double b,double c)
{
	double x1,x2;
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"x1="<<x1<<" x2="<<x2<<endl;
}

double equal(double a,double b)
{
	double x;
	x=-b/(2*a);
	cout<<"x="<<x<<endl;
}

double small()
{
	cout<<"x is meaningless."<<endl;
}

int main()
{
	double x,a,b,c;
	cin>>a>>b>>c;
	if(sqrt(b*b-4*a*c)>0) x=big(a,b,c);
	else if(sqrt(b*b-4*a*c)==0) x=equal(a,b);
	else x=small();
	return 0;
}
