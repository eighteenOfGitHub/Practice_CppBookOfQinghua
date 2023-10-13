//สตั้ม๙ 2(1)กถ3กท
#include <iostream>
using namespace std;

int main( )
{
int i = 0 , base , n , j , num[ 20 ] ;
cin >> n >> base ;
do{
	i ++;
	num[ i ] = n % base ;
	n = n / base ;
}while ( n != 0 );
for ( j = i ; j >= 1 ; j--) 
	cout << num[ j ] ;
return 0;
}


