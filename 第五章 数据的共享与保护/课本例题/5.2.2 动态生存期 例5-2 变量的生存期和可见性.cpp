//5.2.2 ��̬������ ��5-2 �����������ںͿɼ���
#include<iostream>
using namespace std;
//iΪȫ�ֱ��������о�̬������
int i = 1;

void other()
{
	//a��bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���ֻ��һ�ν���ʱ����ʼ����
	static int a = 2;
	static int b;
	//cΪ�ֲ����������ж�̬�����ڣ�ÿ�ν��뺯��ʱ����ʼ��
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
	b = a;
}

int main()
{
	//aΪ��̬�ֲ�����������ȫ���������ֲ��ɼ�
	static int a;
	//cΪ�ֲ����������ж�̬������
	int b = -10;
	int c = 0;

	cout << "---MAIN---" << endl;
	cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
	c += 8;
	other();
	cout << "---MAIN---" << endl;
	cout << "i:" << i << " a:" << a <<  " b:" << b << " c:" << c << endl;
	i += 10;
	other();
	return 0;
}

//---MAIN---
//1 0 -10 0
//-- - OTHER-- -
//33 4 0 15
//---MAIN---
//33 0 -10 8
//-- - OTHER-- -
//75 6 4 15