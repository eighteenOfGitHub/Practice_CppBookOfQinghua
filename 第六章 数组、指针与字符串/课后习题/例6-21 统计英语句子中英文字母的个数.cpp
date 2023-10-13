//例6 - 21 统计英语句子中英文字母的个数
#include<iostream>
#include<string>
using namespace std;

int count(char* p)
{
	int num = 0;
	for (int i = 0; p[i]; i++)
	{
		if ( (p[i] >= 'a' && p[i] <= 'z') 
		     || (p[i] >= 'A' && p[i] <= 'Z') )
			num++;
	}
	return num;
}

int main()
{
	//字符串定义
	string sentence;
	//提示用户输入英语句子
	cout << "请输入一条英语句子：\n";
	//获取整行的字符串
	getline(cin, sentence);
	//获取字符串的首字符地址
	char* ptr = &sentence[0];
	//输出英文字母数量
	cout << "句子中共有 " << count(ptr) << " 个字母。" << endl;

	return 0;
}