#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int b=0;
	while(x>0)
	{
		x/=10;
		b++;
	}
	cout<<b;
	return 0;
}
