//例6-23 求平均成绩
#include<iostream>
using namespace std;

unsigned EverageOfScore(int* p)
{
	int sum = 0;
	for (int i = 0; i < 8; i++)
		sum += *(p + i);
	return sum / 8;
}


int main()
{
	//定义学生成绩数组，元素个数为8
	int score_student[8];
	//输入八位学生成绩
	srand((int)time(NULL));   //随机数种子
	for (int i = 0; i < 8;i++ )
	{
		score_student[i] = rand() % 40 + 61;   //生成随机数为学生成绩
		cout << "学生 " << i+1 << " 的成绩为: " << score_student[i] << endl;
	}
	//计算并输出平均数
	int* ptr = score_student;
	cout << "八位学生的平均成绩为： " << EverageOfScore(ptr) << endl;
	return 0;
}