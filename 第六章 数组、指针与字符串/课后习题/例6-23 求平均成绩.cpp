//��6-23 ��ƽ���ɼ�
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
	//����ѧ���ɼ����飬Ԫ�ظ���Ϊ8
	int score_student[8];
	//�����λѧ���ɼ�
	srand((int)time(NULL));   //���������
	for (int i = 0; i < 8;i++ )
	{
		score_student[i] = rand() % 40 + 61;   //���������Ϊѧ���ɼ�
		cout << "ѧ�� " << i+1 << " �ĳɼ�Ϊ: " << score_student[i] << endl;
	}
	//���㲢���ƽ����
	int* ptr = score_student;
	cout << "��λѧ����ƽ���ɼ�Ϊ�� " << EverageOfScore(ptr) << endl;
	return 0;
}