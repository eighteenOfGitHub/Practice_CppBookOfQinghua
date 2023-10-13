#include <iostream>
using namespace std;
int main()
{
	unsigned int x, y = 100, z = 50;
	x = y - z;
	cout << "y-z=" << x ;
	x = z - y;
	cout << "\nz-y=" << x ;
	return 0;
}