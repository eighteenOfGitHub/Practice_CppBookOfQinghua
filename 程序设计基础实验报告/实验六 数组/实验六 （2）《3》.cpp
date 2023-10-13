//实验六 （2）《3》
#include<iostream>
#include<vector>
using namespace std;

int factor(int* p, int* q);    //求两个数组元素最小公约数
int factor(int p, int* q);     //求两个数的最小公约数与一个数组元素的最小公约数重载
int AllOfFactor(int* p, int n);//求数组所有元素的最小公约数

int multiple(int* p, int* q);    //求两个数组元素最大公倍数
int multiple(int p, int* q);     //求两个数的最大公倍数与一个数组元素的最大公倍数重载
int AllOfMultiple(int* p, int n);//求数组所有元素的最大公倍数

int main()
{
	//构建数组
	cout << "请输入整数的个数：";
	int line;   //整数个数
	cin >> line;
	vector<int>a(line);
	cout << "\n请输入整数数组：";
	for (int i = 0; i < line; i++)
		cin >> a[i];
	int* p = &a[0];

	//求最大公约数和最小公倍数并输出
	cout << "\n最大公约数为： " << AllOfFactor(p, line);
	cout << "\n最小公倍数为： " << AllOfMultiple(p, line) << endl;
	return 0;
}

//求最大公约数功能实现
int factor(int* p, int* q)
{
	int a, b, r;
	if (*p > *q) { a = *p; b = *q; }
	else if (*p < *q) { a = *q; b = *p; }
	else { return *p; }

	while ((r = a % b) != 0)
	{
		a = b;
		b = r;
	}
	return b;
}

int factor(int p, int* q)
{
	int a, b, r;
	if (p > *q) { a = p; b = *q; }
	else if (p < *q) { a = *q; b = p; }
	else { return p; }
	
	while ((r = a % b) != 0)
	{
		a = b;
		b = r;
	}
	return b;
}

int AllOfFactor(int* p, int n)
{
	int f = factor(p, p + 1);
	for (int i = 2; i < n; i++)
		f = factor(f, (p + i));
	return f;
}


//求最小公倍数功能实现
int multiple(int* p, int* q)
{
	int f = factor(p, q);
	return *p * *q / f;
}

int multiple(int p, int* q)
{
	int f = factor(p, q);
	return p * *q / f;
}

int AllOfMultiple(int* p, int n)
{
	int m = multiple(p, p + 1);
	for (int i = 2; i < n; i++)
		m = multiple(m, (p + i));
	return m;
}


//factor因数
//multiple倍数