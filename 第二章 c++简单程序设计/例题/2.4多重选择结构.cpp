//2.4 duochongxuanzejiegou
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter x";
    cin>>x;
    cout<<"enter y";
    cin>>y;
    if(x!=y)
    {
    	if(x>y)
    	cout<<x;
    	else
    	cout<<y;
	}
	else cout<<"x=y"<<endl;
	
    return 0;
}
