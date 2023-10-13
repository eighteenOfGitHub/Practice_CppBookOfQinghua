//实验三 1（2）《1》
#include <iostream>
using namespace std;

int hcf( int u , int v )//辗转相除法：求最大公约数 
{
    int a,b,t,r; 
    if (u > v)
	    {
    	t = u ;
    	u = v ;
	    v = t ;
        }
    a = u ;
    b = v ;
     while ( ( r = b % a ) != 0 )
    {
    b = a ;
    a = r ;
    }
    return( a ) ;
}

int lcd( int u , int v , int h )
{
	return( u * v / h ) ;
}

int main()
{
	int u , v , h , l ;

	cin >> u >> v ;
	h = hcf ( u , v ) ;
	cout << "hcf=" << h << endl ;
	l = lcd ( u , v, h ) ;
	cout << "lcd=" << l << endl ;
	return 0;
}
//输入：48,32

