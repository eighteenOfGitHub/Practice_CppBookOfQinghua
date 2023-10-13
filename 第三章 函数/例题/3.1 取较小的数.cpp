#include<iostream>
using namespace std;
int min(int a,int b)
{
	if(a>=b)return b;
	else return a; 
}
int main()
{
	int t,x,y;
	cin>>x>>y;
	t=min(x,y);
	cout<<t<<endl;
	return 0;
}

