#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;


int main()
{
	ofstream ofs("text1.txt", ios_base::out);
	ofs << "�ѳɹ�д���ļ���";
	ofs.close();

	string str;
	ifstream ifs("text1.txt", ios_base::in);
	//ifs.read(reinterpret_cast<char*>(&str), sizeof("�ѳɹ�д���ļ���"));
	//��仰��֪��Ϊʲô�ᱨ��
	ifs >> str;
	cout << str;
	ifs.close();

	return 0;
}