//2.4 Чѓвђзг
#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
        if (a % i == 0) 
            cout << i <<" ";
}