//ÊµÑéÈý 1£¨1£©¡¶4¡·
#include<iostream>
#include<cmath>
using namespace std;

double F(double x,double y)
{
	double f;
	f=exp(x+y)+exp(x-y);
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
