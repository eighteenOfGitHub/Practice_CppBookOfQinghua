//2-29 ��������������for��䣩 
#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=100;i++)
    {
    int c=0 ;
    for(int a=1;a<=i;a++)
        {
        if(i%a==0)c+=1;
        }
    if(c==2)cout << i << " " ;
    }
  return 0;
}
