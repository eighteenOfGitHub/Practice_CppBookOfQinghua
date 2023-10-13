#include <iostream>
using namespace std;

int k = 1 ;
int main()
{
	int i = 4 ;
int fun (int);

	fun( i ) ;
	cout << "(1)"<< i << ',' << k << endl ;
}

fun( int m )
{
	m += k;
	k += m;
	{
	char k = 'B';
	cout << "(2)" << char(k-1) << endl ;
    }
cout << "(3)"<< m << ',' << k << endl ;
}

