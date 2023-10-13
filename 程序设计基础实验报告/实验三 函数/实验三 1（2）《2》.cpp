//ÊµÑéÈý 1£¨2£©¡¶2¡· 
#include <iostream>
using namespace std;

	long  fib ( int g )
	{
		switch ( g )
		{
			case 0 : return 0;
			case 1 :
            case 2 : return 1;
        }
    return ( fib( g - 1 ) + fib( g - 2 ) ) ;
}

int main ( )
{
		long k;
		k = fib ( 7 );
		cout << "k=" << k << endl ;
		return 0;
}

