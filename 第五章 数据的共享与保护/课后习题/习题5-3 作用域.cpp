//Ï°Ìâ5-3 ×÷ÓÃÓò
#include<iostream>
using namespace std;

int  x=5,y=7;

void myFunction()
{
	int y = 10;
	cout << "x from my Function : "<< x << "\n" ;
	cout << "y from my Function : "<< y << "\n\n" ;
}

int main()
{
	cout<<"x from main : " << x << "\n" ; 
	cout<<"x from main : " << y << "\n\n" ; 
	myFunction();
	cout<<"Back from myFunction!\n\n";
	cout<<"x from main : " << x << "\n" ; 
	cout<<"y from main : " << y << "\n\n" ; 
	return 0;
}
