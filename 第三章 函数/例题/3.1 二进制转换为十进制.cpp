#include<iostream>
using namespace std;
int pow(int a,int b)
{
    int z=1;
    b-=1;
	while(b--)
	{
		z*=a;
	}
	return z;	
}
int main()
{
 cout<<"please input a 8 bit binary number"<<endl;
 int a,t;
 t=0;
 cin>>a;
 for(int i=1;i<=8;i++)
 {
 	if(a%10==1)
 	{
 		int b=pow(2,i);
 		t+=b;
	}
	a=a/10;
 }
 cout<<t<<endl; 
 return 0;
}
