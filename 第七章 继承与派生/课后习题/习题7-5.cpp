//习题7-5
#include<iostream>
using namespace std;
const double PI = 3.14;

class Shape {
public:
	Shape() { cout << "得到一个图形： " << endl; }
};

class Rectangle :public Shape {
public:
	Rectangle(double l=0, double w=0):l(l),w(w)
	{
		cout << "长为 " << l << " 宽为 " << w << " 的矩形" << endl;
	}
	void GetArea() { cout << "矩形的面积为： " << l * w << endl; }
private:
	double l, w;
};

class Square :public Rectangle {
public:
	Square(double a = 0) :a(a),Rectangle(a,a)
	{
		cout << "边长为 " << a << " 的正方形" << endl;
	}
	void GetArea() {cout << "正方形的面积为： " << a * a << endl;}
private:
	double a;
};

class Circle :public Shape {
public:
	Circle(double r = 0) :r(r)
	{
		cout << "半径为 " << r << " 的圆" << endl;
	}
	void GetArea() { cout << "圆的面积为： " << r * r * PI << endl; }
private:
	double r;
};


int main() {
	double a, w, l, r;
	cout << "输入矩形边长： ";
	cin >> l >> w;
	cout << "\n输入圆形边长： ";
	cin >> r;
	cout << "\n输入正方形边长： ";
	cin >> a;
	cout << endl;
	
	Rectangle rec(l, w);
	rec.GetArea();
	cout << endl;
	
	Circle cir(r);
	cir.GetArea();
	cout << endl;

	Square squ(a);
	squ.GetArea();
	cout << endl;

	return 0;
}