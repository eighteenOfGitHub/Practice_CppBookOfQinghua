//3.1 Àı3.6 Í¶É«×Ó
#include<iostream>
#include<cstdlib>
using namespace std;

int sum()
{
	int sum1 = 1 + rand() % 6;
	int sum2 = 1 + rand() % 6;
	int sum = sum1 + sum2;
	cout << "player rolled" << sum1 << "+ " << sum2 << "= " << sum << endl;
	return sum;
}

enum gamestatus{win,lose,playing};

int main()
{
	int a, b;//b=my point
	gamestatus status;
	
	unsigned seed;
	cout << "please enter an unsinged integer:";
	cin >> seed;
	srand(seed);
	
	a = sum();
	switch (a)
	{
	case 7:
	case 11:
		status = win;
		break; 
	case 2:
	case 3:
	case 12:
		status = lose;
		break;
	default:
		status = playing;
		b = a;
		cout << "my point is " << a << endl;
		break;
	}

	while (status == playing)
	{
		a = sum();
		if (a == b)status = win;
		else if (a == 7)status = lose;
	}
	
	if (status == win)cout << "you are win" << endl;
	else cout << "you are lose" << endl;
	
	return 0;
}