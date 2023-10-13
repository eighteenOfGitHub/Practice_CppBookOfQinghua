//3.1 eg3.9n个人选k个人组成一个委员会求组合数 
#include<iostream>
using namespace std;

int sum(int n,int k)
{
	if (n<k) cout<<"the number is wrong, n>=k is ture, please input again."<<endl;
	else if(n==k||k==0) return 1;
	else if (n>k)  return sum(n-1,k)+sum(n-1,k-1);
 } 
 
 int main()
 {
 	unsigned a,b;
 	cout<<"input n, k"<<endl;
	 cin>>a>>b;
 	cout<<sum(a,b)<<endl;
	 return 0; 
 }
