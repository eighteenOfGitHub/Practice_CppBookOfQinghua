#include <iostream>
using namespace std;
int main()
{
	cout << "����һ��������0~100��" << endl;
	int a, b;
	srand(time(0));//time()��ϵͳʱ���ʼ���֡�Ϊrand()���ɲ�ͬ��������ӡ�
	b = rand() % 100 + 1;
	circulation:cin >> a;//circulation=ѭ��
		while (a != b)
		{
			if (a < b)
			{
				cout << "you number is smaller than it. " << endl;
				goto circulation;
			}
			else
			{
				cout << "you number is bigger than it. " << endl;
				goto circulation;
			}
		}
		cout << " Congratulations!You are right! It is " << a << " . " << endl;
	return 0;
}
