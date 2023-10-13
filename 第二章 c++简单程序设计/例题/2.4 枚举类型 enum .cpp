//2.4 Ã¶¾ÙÀàĞÍ enum
#include <iostream>
using namespace std;
enum gr{ win, lose, tie, cancel };//gr=gameresult;
int main()
{
	gr result;
	
	for (int count = win; count <= cancel; count++)
	{
		result = gr(count);
		enum gr omit = cancel;
		if (result ==omit)cout << "the game was cancelled" << endl;
		else
		{
			cout << "the game was played ";
			if (result == win)cout << "and we won";
			if (result == lose)cout << "and we lost ";
			cout << endl;
		}
	}
	return 0;
}