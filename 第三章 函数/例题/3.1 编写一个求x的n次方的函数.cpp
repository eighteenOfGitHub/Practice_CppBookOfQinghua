#include<iostream>
using namespace std;
int pow(int a,int b)
{
    int z=1;
	while(b--)
	{
		z*=a;
	}
	return z;	
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<pow(x,y)<<endl;
	return 0;
}
