//ÊµÑéÈý 1£¨1£©¡¶1¡·
#include<iostream>
using namespace std;

double F(double x,double a,double b,double c,double d)
{
	double f;
	f=x+(a+b)/(c-d);
	return f;
} 

int main()
{
	double f,x,a,b,c,d;
	cout<<"tip: c!=d"<<endl;
	cin>>x>>a>>b>>c>>d;
	f=F(x,a,b,c,d);
	cout<<f<<endl;
	return 0;
}
