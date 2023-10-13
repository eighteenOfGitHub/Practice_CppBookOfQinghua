//ÊµÑéÁù £¨2£©¡¶1¡·£¨1£©3£©
#include<iostream>
using namespace std;

int main()
{
	int a[10] = { 1,2 };
	for (int i = 2; i < 10; i++)
		a[i] = a[i - 1] + a[i - 2];
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}