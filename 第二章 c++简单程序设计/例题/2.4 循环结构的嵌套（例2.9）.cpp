//2.4 循环结构的嵌套（例2.9）
#include<iostream>
using namespace std;

int main()
{
    for (int j = 1, n = 37; j <= 4; j++, n -= 2, cout << endl)
    {
        for (int i = 1; i <= 37; i++)
        {
            if (i < n)cout << " ";
            else if (i >= n && i <= 37)cout << "*";
        }
    }
    for (int j = 1, n = 35; j <= 3; j++, n -= 2, cout << endl)
    {
        for (int i = 1; i <= 37; i++)
        {
            if (i <= 30)cout << " ";
            else if (i > 30 && i <= n)cout << "*";
        }
    }
}
