//习题2 - 27 分数等级
#include<iostream>
using namespace std;
int main()
{
	int a;
	input:cin >> a;
	if (a >= 90 && a <= 100)cout << "优\n";
	else if (a >= 80 && a < 90)cout << "良\n"; 
	else if (a >= 60 && a < 80)cout << "中\n";
	else if (a >= 0 && a < 60)cout << "差\n";
	else
	{
		cout << "your score is not ture,the score is from 0 to100,please input again.\n";
		goto input;
	}
	return 0;
}