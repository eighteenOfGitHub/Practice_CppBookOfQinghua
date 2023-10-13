//2.4do while
#include<iostream>
using namespace std;

int main()
{
    int s=0,i=1;
	do
    {
    	s+=i;
    	++i;
	}
	while(i<=100);
	cout<<s<<endl;
    return 0;
}

