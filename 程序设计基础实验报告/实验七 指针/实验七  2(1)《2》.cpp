// µ—È∆ﬂ  2(1)°∂2°∑ 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int stre ( char[ ] ) ;
	char str [ 10 ] , *p = str ;

	gets ( p ) ;
	cout << stre ( p ) << endl ;
	return 0;
}


int stre ( char str[ ] )
{	
int num = 0 ;
	while( * ( str + num ) != '\0' )  num ++ ;
	return ( num ) ;
}

