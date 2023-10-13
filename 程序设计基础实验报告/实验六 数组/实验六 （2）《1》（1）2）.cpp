//ÊµÑéÁù £¨2£©¡¶1¡·£¨1£©2£©
#include<iostream>
using namespace std;

int main()
{
	int a[10];
	a[0] = 1;
	for (int i = 1; i < 10; i++)
		a[i] = a[i - 1] + i + 1;
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}