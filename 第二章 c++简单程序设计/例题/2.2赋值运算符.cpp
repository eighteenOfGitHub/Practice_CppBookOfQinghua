//2.2��ֵ����� 
#include<iostream>
using namespace std;

int main()
{
    int a=2,b=1,c=2;
    a*=b+1;
    c+=c-=c*c;//c=c+(c=c-c*c),��һ���Ⱥź����c����ֵΪ-2��-2+(-2)=-4 
	cout<<a<<" "<<b<<" "<<c<<endl; 

    return 0;
}


