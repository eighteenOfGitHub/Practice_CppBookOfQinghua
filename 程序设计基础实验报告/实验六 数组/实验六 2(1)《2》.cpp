//สตั้ม๙ 2(1)กถ2กท
#include <iostream>
#include <cstring>
using namespace std;
	int main( )
	{
		char a[ 20 ] = "TER" , b[ 20 ] = "COMP" ;
		int i = 0 ;
		strcat(a,b) ;
		while (a[ i ++ ] != '\0' ) b[ i ] = a[ i ] ;
		cout << b ;
		return 0;
}

