#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int value;   //ע�⣺����ֻ�������ͣ�double ����
	while (1)
	{
		cin >> value;
		if (value == 10086)
			break;
		cout << "ʮ����: " << setiosflags(ios_base::dec) << value << resetiosflags(ios_base::dec) <<endl;
		cout << "�˽���: " << setiosflags(ios_base::oct) << value << resetiosflags(ios_base::oct) <<endl;
		cout << "ʮ������: " << setiosflags(ios_base::hex) << value << resetiosflags(ios_base::hex) << endl;
	}

	return 0;
}