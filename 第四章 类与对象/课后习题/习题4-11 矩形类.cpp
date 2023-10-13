//œ∞Ã‚4 - 11 æÿ–Œ¿‡
#include<iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(double l, double w);
	Rectangle(Rectangle& r);
	double CalculateArea(Rectangle r);
private:
	double l, w;
};

Rectangle::Rectangle(double ll, double ww)
{
	l = ll;
	w = ww;
}

Rectangle::Rectangle(Rectangle& r)
{
	l = r.l;
	w = r.w;
}

double Rectangle::CalculateArea(Rectangle r)
{
	return r.l * r.w;
}

int main()
{
	cout << "Please enter long(long>0) and wide(wide>0):" << endl;
	double r_l, r_w;
	cin >> r_l >> r_w;
	Rectangle r(r_l, r_w);
	cout << "The area is : " << r.CalculateArea(r) << endl;;
	return 0;
}