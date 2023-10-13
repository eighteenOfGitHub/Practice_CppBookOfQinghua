#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int value;   //注意：这里只能用整型，double 不行
	while (1)
	{
		cin >> value;
		if (value == 10086)
			break;
		cout << "十进制: " << setiosflags(ios_base::dec) << value << resetiosflags(ios_base::dec) <<endl;
		cout << "八进制: " << setiosflags(ios_base::oct) << value << resetiosflags(ios_base::oct) <<endl;
		cout << "十六进制: " << setiosflags(ios_base::hex) << value << resetiosflags(ios_base::hex) << endl;
	}

	return 0;
}