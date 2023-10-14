#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream file("intergers", ios_base::in | ios_base::binary);
	if (file)
	{
		while (file)
		{
			streampos here = file.tellg();
			int v;
			file.read(reinterpret_cast<char*>(&v), sizeof(int));
			if (file && v == 7)
				cout << "Postion " << here << " is 7" << endl;
		}
	}
	else
	{
		cout << "ERROR: Cannot open file 'integers'." << endl;
	}
	file.close();


	return 0;
}

//ÎÄ¼þÄÚÈÝ£º13579 
//sizeof(int) == 4