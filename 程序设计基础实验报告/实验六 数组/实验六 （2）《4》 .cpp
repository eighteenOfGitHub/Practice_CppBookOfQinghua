//实验六 （2）《4》
#include<iostream>
#include<string>
#include<cmath>
//#include<vector>
using namespace std;

int main()
{
	//初始化十六进制数，声明十进制数
	string sixteen1;
	int ten = 0;
	cout << "输入十六进制数： ";
	cin >> sixteen1;
	int line = sixteen1.length();
	
	//十六进制数转换为十进制数
	for (int i = line - 1; i >= 0; i--)
	{
		if (sixteen1[i] <= '9' && sixteen1[i] >= '0')
			ten += ((int)sixteen1[i] - 48) * pow(16, line - i - 1);
		if (sixteen1[i] <= 'F' && sixteen1[i] >= 'A')
			ten += ((int)sixteen1[i] - 55) * pow(16, line - i - 1);
	}
	//输出十进制数
	cout << "十进制数为： " << ten;
	return 0;
}