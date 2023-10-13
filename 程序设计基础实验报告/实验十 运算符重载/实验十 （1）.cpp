//实验十 （1）
#include<iostream>
#include "string.h"
#include "conio.h"
using namespace std; 

class binary {    //定义二进制类
    char bits[16];  //二进制字模数组
public:
    binary(char*);   //字符串参数构造函数
    binary(int);      //整型参数构造函数
    friend binary operator +(binary, binary);   //重载“+”
    friend binary operator -(binary, binary);   //重载“-”
    operator int();  //类类型转换函数
    void print();
};

binary::binary(char* num)
{
    int isrc = strlen(num) - 1;    //字符串长度-1为最低位
    int idest = 15;
    while (isrc >= 0 && idest >= 0)
        bits[idest--] = (num[isrc--] == '0' ? '0' : '1');    // 逐位赋值
    while (idest >= 0) bits[idest--] = '0';          // 空高位值0
}

binary::binary(int num)
{
    for (int i = 15; i >= 0; i--)
    {
        bits[i] = (num % 2 == 0 ? '0' : '1');   //求余数
        num >>= 1;            //移位，相当于整除2
    }
}

binary operator +(binary n1, binary n2)
{
    unsigned carry = 0;
    unsigned value;
    binary res = '0';
    for (int i = 15; i >= 0; i--)
    {
        value = (n1.bits[i] == '0' ? 0 : 1) + (n2.bits[i] == '0' ? 0 : 1)+carry;
        res.bits[i] = (value % 2 == 0 ? '0' : '1');
        carry = value >> 1;
    }
    return res;
}

binary operator -(binary n1, binary n2)
{
    unsigned borrow = 0;
    int value;
    binary res = '0';
    for (int i = 15; i >= 0; i--)
    {
        value = (n1.bits[i] == '0' ? 0 : 1) - (n2.bits[i] == '0' ? 0 : 1) + borrow;
        res.bits[i] = (value == -1 || value == 1 ? '1' : '0');
        borrow = (value == -1 || borrow != 0 && (value == 0 || value == 1) ? 1 : 0);
    }
    return res;
}

binary::operator int()
{
    unsigned value = 0;
    for (int i = 0; i <= 15; i++)
        value = (value <<= 1)+(bits[i] == '0' ? 0 : 1);
    return value;
}

void binary::print()
{
    char str[17];
    strncpy_s(str, bits, 16);
    str[16] = '\0';
    cout << str << "\n";
}

int main()
{
    char a[16] = "1011";
    binary n1 = a;
    binary n2 = int(n1) + 15;
    binary n3 = n1 - binary(7);
    n1.print();
    n2.print();
    n3.print();
    cout << int(n2) + 5 << endl;
    cout << n2 - binary(5) << endl;
    cout << n3 + binary(5) << endl;
    cout << int(n3) - 5 << endl;
    return 1;
}
