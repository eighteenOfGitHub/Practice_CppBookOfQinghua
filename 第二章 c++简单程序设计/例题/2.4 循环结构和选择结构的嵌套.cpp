//2.4 循环结构和选择结构的嵌套
#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 0,n;
    cin >> n;
    while (n != 0)
    {
        if (n < 0)a += 1;
        else b += 1;
        cin >> n;
    }
    cout << "game over" << endl;
    cout <<"负数有"<< a << " " << "正数有" <<b <<endl;
    return 0;
}

