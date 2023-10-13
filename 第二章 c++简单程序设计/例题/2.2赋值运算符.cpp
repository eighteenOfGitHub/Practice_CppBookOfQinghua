//2.2赋值运算符 
#include<iostream>
using namespace std;

int main()
{
    int a=2,b=1,c=2;
    a*=b+1;
    c+=c-=c*c;//c=c+(c=c-c*c),第一个等号后面的c被赋值为-2，-2+(-2)=-4 
	cout<<a<<" "<<b<<" "<<c<<endl; 

    return 0;
}


