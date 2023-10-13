//2-34 ¿Ú´üÖÐÈ¡Çò
#include<iostream>
using namespace std;
enum color{red,yellow,blue,white,bleak};
int main()
{
	int n=0;
	for (int a = red; a <= blue; a++)
	{
		for (int b = a+1; b <= white; b++)
		{
			for (int c= b+1 ; c<= bleak; c++)
			n++;
		}
	}
	cout << n << endl;
	return 0;
}