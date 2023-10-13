//2-29 百以内求质数（for语句） 
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
