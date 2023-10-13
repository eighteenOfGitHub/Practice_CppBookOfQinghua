//2-29 百以内求质数(while语句)
#include<iostream>
using namespace std;
int main()
/*
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
*/
{
int i=2;
while(i<=100)
    {
    int a=2;
    while(a<=i)
        {
        if(i%a==0) 
            {
            if(i/a!=1)break;//优化程序，减少运算步骤
            else 
                {
                cout << i << " " ;
                break ;
                }
            }
        else a++;
        }
    i++;
    }
return 0;
}