//ÊµÑéÆß  2(1)¡¶1¡· 
#include <iostream>
using namespace std;

sub ( int x , int y , int *z ) 
{
	*z = y - x ;
}

int main( )
{
int a,b,c;
sub( 10 , 5 , &a ) ;
sub( 7, a, &b ) ;
sub( a, b, &c ) ;
cout << a << ',' << b << ',' << c << endl ;
return 0;
}

