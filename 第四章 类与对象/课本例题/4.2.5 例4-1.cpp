//4.2.5 例4-1
#include<iostream>
using namespace std;

class Clock //时钟类的定义
{
public:  //外部接口，公有成员函数
	void settime(int newh = 0, int nowm = 0, int news = 0);
	void showtime();
private:  //私有数据成员
	int hour, minute, second;
};

//时钟类成员函数的具体实现
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

//主函数
int main()
{
	Clock myclock; //定义对象myclock
	cout << "first time set and output : " << endl;
	myclock.settime();  //设置时间为默认值
	myclock.showtime();  //显示时间
	cout << "second time set and output :" << endl;
	myclock.settime(8, 30, 30);  //设置时间为8：30：30
	myclock.showtime();  //显示时间
	return 0;
}