#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	ofstream ofs("text1.txt", ios_base::out);
	ofs << "已成功写入文件！";
	ofs.close();

	return 0;
}