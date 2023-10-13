//5.2.2 动态生存期 例5-3 具有静态和动态生存期对象的时钟程序
#include<iostream>
using namespace std;

class Clock             //时钟类定义
{
public:
	Clock() ;
	//三个形参均具有函数原型作用域
	void setTime(int newH, int newM, int NewS);
	void showTime();
private:
	int hour, minute, second;
};

//时钟类成员函数实现
Clock::Clock():hour(0),minute(0),second(0){}  //构造函数

void Clock::setTime(int newH, int newM, int newS)
{
	//三个形参均具有局部作用域
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;      //声明对象globeClock，具有静态生存期，命名空间作用域，由构造函数初始化为 0：0：0

int main()
{
	cout << "First time output" << endl;
	//引用具有命名空间作用域的对象globeClock
	globClock.showTime();                          //对象的成员函数具有类作用域，显示0：0：0
	globClock.setTime(8, 30, 30);                  //设置时间为 8：30：30
	Clock myClock(globClock);                      //声明具有块作用域的对象myClock,以globClock为初始值调用复制构造函数
	cout << "Second time output" << endl;
	myClock.showTime();                            //输出 8:30:30
	return 0;
}
