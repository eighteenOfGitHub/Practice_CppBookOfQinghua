#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	ofstream ofs("text1.txt", ios_base::out);
	ofs << "�ѳɹ�д���ļ���";
	ofs.close();

	return 0;
}