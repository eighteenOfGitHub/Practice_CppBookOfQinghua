//3.1 eg3.8¼ÆËã½×³Ë
#include<iostream>
using namespace std;

int fac(unsigned n)
{
	unsigned f;
	if(n==0)f=1;
	else f=fac(n-1)*n;
	return f;
} 

int main()
{
	unsigned a,b;
	cin>>a;
	b=fac(a);
	cout<<b<<endl;
	return 0;
}
