//5.2.2 ��̬������ ��5-3 ���о�̬�Ͷ�̬�����ڶ����ʱ�ӳ���
#include<iostream>
using namespace std;

class Clock             //ʱ���ඨ��
{
public:
	Clock() ;
	//�����βξ����к���ԭ��������
	void setTime(int newH, int newM, int NewS);
	void showTime();
private:
	int hour, minute, second;
};

//ʱ�����Ա����ʵ��
Clock::Clock():hour(0),minute(0),second(0){}  //���캯��

void Clock::setTime(int newH, int newM, int newS)
{
	//�����βξ����оֲ�������
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;      //��������globeClock�����о�̬�����ڣ������ռ��������ɹ��캯����ʼ��Ϊ 0��0��0

int main()
{
	cout << "First time output" << endl;
	//���þ��������ռ�������Ķ���globeClock
	globClock.showTime();                          //����ĳ�Ա������������������ʾ0��0��0
	globClock.setTime(8, 30, 30);                  //����ʱ��Ϊ 8��30��30
	Clock myClock(globClock);                      //�������п�������Ķ���myClock,��globClockΪ��ʼֵ���ø��ƹ��캯��
	cout << "Second time output" << endl;
	myClock.showTime();                            //��� 8:30:30
	return 0;
}
