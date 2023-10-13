//实验六 （2）《5》
#include<iostream>
using namespace std;
const int n = 16;

//字符转换函数
char trans(int n)
{
	if (n <= 9 && n >= 0) { return '0' + n; }
	if (n >= 10 && n <= 15) { return 'A' + n - 10; }
}

int main()
{
	int ten,quo=0,mod=0;
	cout << "您输入的十进制数位： ";
	cin >> ten;
	char temp[8]{};
	int i = 0;
	//十进制转换十六进制
	do{
		quo = ten / n;
		mod = ten % n;
		temp[i] = trans(mod);
		i++;
		ten = quo;
	}while (ten!=0);
	//计算十六进制数长度
	int line = 0;
	for (int j = 0; temp[j] != '\0'; j++)
		line++;
	cout << "\n十六进制数长度为: " << line << endl;
	//输出十六进制数
	cout << "\n转换后的十六进制数为： ";
	for (int j = line; j!=0;j--)
		cout << temp[j-1];
	return 0;
}