//实验六 （2）《6》
#include<iostream>
using namespace std;
static int point = 0;

//输出数组
void getarray(int* p, int line)
{
	for (int i = 0; i < line; i++)
		cout << *(p+i) << " ";
	cout << endl;
}

//原理：
//折中判断大小
//正好相等，返回相对位置
//不相等，更新数组初始地址，更新数组长度，循环判断
//middle等于1，即为数组长度为2或3，简化判断，从头到尾逐一排查
int getpoint(int* p, int randon, int len)
{
	int middle = len / 2;
	while (middle != 0)
	{
		if (middle == 1)
		{
			for (int i = 0; i < len; i++)
			{
				if (*(p + i) == randon)
				{
					return point - len / 2 + i;
				}
			}
			return -1;
		}
		if (len % 2 == 1)   //长度为奇数
		{
			if (*(p + middle) == randon)
			{
				return point;
			}
			if (*(p + middle) < randon)
			{
				p += middle;   //更新数组首地址
				point += middle / 2;
				len = len / 2 + 1;   //更新数组长度
				middle /= 2;
			}
			if (*(p + middle) > randon)
			{
				point -= middle / 2;
				len = len / 2 + 1;
				middle /= 2;
			}
		}
		if (len % 2 == 0)   //长度为偶数
		{
			if (*(p + middle-1) == randon)
			{
				return point;
			}
			if (*(p + middle-1) < randon)
			{
				p += middle -1;
				point += middle / 2;
				len = len / 2 + 1;
				middle = len / 2;
			}
			if (*(p + middle-1) > randon)
			{
				point -= middle / 2;
				len /= 2;
				middle /= 2;
			}
		}
	}
	return -1;
}

int main()
{
	int a[10];

	//生成随机数组
	const int len = sizeof(a) / sizeof(a[0]);
	srand((int)time(NULL));
	cout << "数组长度为： " << len << endl;
	for (int i = 0; i < len; i++)
	{
	main_again:a[i] = rand() % 30;
		for(int m = 0; i > 0 && m < i; m++)    //防止元素重复
		{
			for (int j = 0; j < i; j++)
			{
				if (a[j] == a[i]) 
					goto main_again;
			}
		}
	}
	
	//输出原数组
	cout << "原数组为： \n";
	getarray(&a[0], len);

	//插入排序
	for (int i = 0; i < len; i++)
	{
		int temp = a[i];
		int j = i - 1;
		while (j >= 0 && temp < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}

	//输出排序后数组
	cout << "从小到大排序: \n";
	getarray(&a[0], len);
	
	//生成一个随机数
	int randon = rand() % 30;
	cout << "随机数为： " << randon << endl;

	//查找随机数,并输出其位置
	point += len / 2;
	int main_point = getpoint(&a[0], randon, len);
	if (main_point == -1) { cout << "数组中没有这个数。" << endl;}
	else{ cout << "随机数位于数组第 " << main_point << " 位。" << endl; }
	
	return 0;
}
