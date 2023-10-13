#include <iostream>
using namespace std;
int main()
{
	cout << "输入一个整数（0~100）" << endl;
	int a, b;
	srand(time(0));//time()用系统时间初始化种。为rand()生成不同的随机种子。
	b = rand() % 100 + 1;
	circulation:cin >> a;//circulation=循环
		while (a != b)
		{
			if (a < b)
			{
				cout << "you number is smaller than it. " << endl;
				goto circulation;
			}
			else
			{
				cout << "you number is bigger than it. " << endl;
				goto circulation;
			}
		}
		cout << " Congratulations!You are right! It is " << a << " . " << endl;
	return 0;
}
