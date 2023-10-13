//4.6.1结构体  例4-7用结构体表示学生的基本信息
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Student
{
	int num;
	string name;
	char sex;
	int age;
};

int main()
{
	Student stu = { 97001,"Lin Lin",'F',19 };
	cout << "Num:" << stu.num << endl;
	cout << "Name:" << stu.name << endl;
	cout << "Sex:" << stu.sex << endl;
	cout << "Age:" << stu.age << endl;
	return 0;
}
