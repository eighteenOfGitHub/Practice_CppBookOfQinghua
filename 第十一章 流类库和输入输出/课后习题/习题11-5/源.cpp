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
	cout << endl;

	ofstream ofs2("text1.txt", ios_base::app);
	ofs2 << "�ѳɹ�����ַ���";
	ofs2.close();

	string str2;
	ifstream ifs2("text1.txt", ios_base::in);
	ifs2 >> str2;
	cout << str2;
	ifs2.close();

	return 0;
}