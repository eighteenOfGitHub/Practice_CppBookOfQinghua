//ʵ��1  1.��1��<2>
#include <iostream>
using namespace std;
int  main()
{
		int m;
		float x;
		bool bi,br;

		cout << "\n int m=";
		cin >> m;
		bi = m > 1000;
		cout << "\n float x=";
		cin >> x;
		br = x <= 1e3;
		cout << bi << ',' << br << endl;
		return 0;
}

