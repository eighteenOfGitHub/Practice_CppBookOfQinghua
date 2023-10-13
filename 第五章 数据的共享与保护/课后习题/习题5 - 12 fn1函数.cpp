//习题5 - 12 fn1函数
#include<iostream>
using namespace std;

//全局变量
static int n = 0;

void fn1()
{
	//证明函数调用
	cout << "fn1调用" << endl;
	n++;
}

int main()
{
	//调用函数十次
	for (int i = 1; i <= 10; i++)
		fn1();
	cout << "n:" << n << endl;
	return 0;
}