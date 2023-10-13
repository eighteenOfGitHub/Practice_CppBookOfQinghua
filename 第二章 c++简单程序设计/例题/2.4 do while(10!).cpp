//2.4 do while(10!)
#include<iostream>
using namespace std;

int main()
{
    int i=10,long s=1;
    do
    {
    	s*=i;
    	i--;
	}
	while(i>=1);
	cout<<s<<endl;
    return 0;
}
