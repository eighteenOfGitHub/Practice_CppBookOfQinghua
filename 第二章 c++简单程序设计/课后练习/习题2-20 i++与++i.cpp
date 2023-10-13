//Ï°Ìâ2 - 20 i++Óë++i
#include<iostream>
using namespace std;
int main()
{
	int a = 39, b = 39;//a=myage,b=yourage
	cout << "i am " << a << "years old. " << endl;
	cout << "you are " << b << "years old. " << endl;
	a++;
	++b;
	cout << "one year passes~" << endl;
	cout << "i am " << a << "years old. " << endl;
	cout << "you are " << b << "years old. " << endl;

	cout << "another year passes~" << endl;
	cout << "i am " << a++ << "years old. " << endl;
	cout << "you are " << ++b << "years old. " << endl;

	cout << "let's print it again. " << endl;
	cout << "i am " << a << "years old. " << endl;
	cout << "you are " << b << "years old. " << endl;
	return 0;
}