#include<iostream>
using namespace std;

int fun1(int m)
{
	return m*m; 
}

int fun2(int m,int n)
{
	return fun1(m)+fun1(n); 
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fun2(a,b)<<endl;
	return 0;
}
