//4.2.5 ��4-1
#include<iostream>
using namespace std;

class Clock //ʱ����Ķ���
{
public:  //�ⲿ�ӿڣ����г�Ա����
	void settime(int newh = 0, int nowm = 0, int news = 0);
	void showtime();
private:  //˽�����ݳ�Ա
	int hour, minute, second;
};

//ʱ�����Ա�����ľ���ʵ��
void Clock::settime(int newh, int newm, int news)
{
	hour = newh;
	minute = newm;
	second = news;
}
inline void Clock::showtime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

//������
int main()
{
	Clock myclock; //�������myclock
	cout << "first time set and output : " << endl;
	myclock.settime();  //����ʱ��ΪĬ��ֵ
	myclock.showtime();  //��ʾʱ��
	cout << "second time set and output :" << endl;
	myclock.settime(8, 30, 30);  //����ʱ��Ϊ8��30��30
	myclock.showtime();  //��ʾʱ��
	return 0;
}