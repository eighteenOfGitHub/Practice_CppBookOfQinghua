//2-29 百以内求质数(do…while语句)
#include<iostream>
using namespace std;
int main()
/*
{
int i=2;

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
*/
{
int i=2;
do
    {
    int a=2;
    do
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
    while(a<=i);
    i++;
}
while(i<=100);
return 0;
}