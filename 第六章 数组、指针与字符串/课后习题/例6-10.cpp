//例6-10
#include<iostream>
using namespace std;

int main()
{
	int a[5]{};
	cout << "请输入五个元素： ";
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	
	cout << "输出五个元素：";
	for(int i = 0; i < 5; i++)
		cout << " " << a[i];
 	
	return 0;
}