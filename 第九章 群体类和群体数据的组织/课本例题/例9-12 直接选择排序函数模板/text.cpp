#include<iostream>
#include"Header.9.12.h"
using namespace std;

int main()
{
	int a[10] = { 4,5,6,44,3267,7,64,79,3,453 };
	selectionSort(a, 10);

	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";

	return 0;
}