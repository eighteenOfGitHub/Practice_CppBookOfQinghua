//ÊµÑéÁù £¨2£©¡¶1¡·£¨2£©2£©
#include<iostream>
#include<vector>
#include <cstring>
using namespace std;

int main()
{
	cout << "enter n: ";
	int n;
	cin >> n;
	cout << "\n\n";

	vector<int>a(n*n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i*n+j] = (i + j + 1) % n;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout.width(3);
			cout << a[i * n + j];
		}
		cout << "\n" << endl;
	}

	return 0;
}

//int main() {
//	int n = 0;
//	cin >> n;
//	int** p = new int* [n];
//	for (int i = 0; i != n; ++i)
//		p[i] = new int[n];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			p[i][j] = (i + 1 + j) % n;
//			cout.width(3);
//			cout << p[i][j] << "  ";
//			if (j == n - 1)cout << "\n" << endl;
//		}
//	}
//}