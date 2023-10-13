//ϰ��7-5
#include<iostream>
using namespace std;
const double PI = 3.14;

class Shape {
public:
	Shape() { cout << "�õ�һ��ͼ�Σ� " << endl; }
};

class Rectangle :public Shape {
public:
	Rectangle(double l=0, double w=0):l(l),w(w)
	{
		cout << "��Ϊ " << l << " ��Ϊ " << w << " �ľ���" << endl;
	}
	void GetArea() { cout << "���ε����Ϊ�� " << l * w << endl; }
private:
	double l, w;
};

class Square :public Rectangle {
public:
	Square(double a = 0) :a(a),Rectangle(a,a)
	{
		cout << "�߳�Ϊ " << a << " ��������" << endl;
	}
	void GetArea() {cout << "�����ε����Ϊ�� " << a * a << endl;}
private:
	double a;
};

class Circle :public Shape {
public:
	Circle(double r = 0) :r(r)
	{
		cout << "�뾶Ϊ " << r << " ��Բ" << endl;
	}
	void GetArea() { cout << "Բ�����Ϊ�� " << r * r * PI << endl; }
private:
	double r;
};


int main() {
	double a, w, l, r;
	cout << "������α߳��� ";
	cin >> l >> w;
	cout << "\n����Բ�α߳��� ";
	cin >> r;
	cout << "\n���������α߳��� ";
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