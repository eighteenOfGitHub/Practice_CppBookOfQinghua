//��6-10
#include<iostream>
using namespace std;

int main()
{
	int a[5]{};
	cout << "���������Ԫ�أ� ";
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	
	cout << "������Ԫ�أ�";
	for(int i = 0; i < 5; i++)
		cout << " " << a[i];
 	
	return 0;
}