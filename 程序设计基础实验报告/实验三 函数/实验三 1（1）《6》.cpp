//ÊµÑéÈý 1£¨1£©¡¶6¡·
#include<iostream>
#include<cmath>
using namespace std;


double F(double a,double b)
{
	double f;
	f=fabs(floor(a)*floor(a)-b*b)+fabs(floor(a)-b);
	return f;
} 

int main()
{
	double f,x,y;
	cin>>x>>y;
	f=F(x,y);
	cout<<f<<endl;
	return 0;
}
