//œ∞Ã‚7 - 10
#include<iostream>
using namespace std;

class Object
{
public:
	Object(double weight = 0) :weight(weight)
	{
		cout << "constucting Object" << endl;
	}
	~Object() { cout << "destructing Object" << endl; }
	
	double getweight() { return weight;}
	void setweight(double main_weight) { weight = main_weight; }

private:
	double weight;
};

class Box:public Object
{
public:
	Box(double weight=0,double height = 0,double width=0) :
		Object(weight),height(height),width(width)
	{
		cout << "constucting Box" << endl;
	}
	~Box() { cout << "destructing Box" << endl; }
	
	double getheight() { return height; }
	void setheight(double main_height) { height = main_height; }
	double getwidth() { return width; }
	void setwidth(double main_width) { width = main_width; }

private:
	double height,width;
};

int main() 
{
	Box box1(50, 60, 80);
	cout << "Box1's weight is: " << box1.getweight() << endl;
	cout << "Box1's height is: " << box1.getheight() << endl;
	cout << "Box1's width is: " << box1.getwidth() << endl;
	return 0;
}