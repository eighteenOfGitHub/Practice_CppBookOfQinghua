//2.4 ѭ���ṹ��ѡ��ṹ��Ƕ��
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
    cout <<"������"<< a << " " << "������" <<b <<endl;
    return 0;
}

