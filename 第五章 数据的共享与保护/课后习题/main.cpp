//ϰ��5 - 14 Boat���Car���������
#include<iostream>
using namespace std;

//ǰ����������
class Car;

class Boat
{
public:
	//���캯��
	Boat(double weight1) :weightofboat(weight1) {};
	//��Ԫ��������
	friend double getTotalWeight(Boat& b1, Car& c1);
private:
	double weightofboat;
};

class Car
{
public:
	//���캯��
	Car(double weight2) :weightofcar(weight2) {};
	//��Ԫ��������
	friend double getTotalWeight(Boat& b1, Car& c1);
private:
	double weightofcar;
};

//��Ԫ����ʵ��
double getTotalWeight(Boat& b1, Car& c1)
{
	return c1.weightofcar + b1.weightofboat;
}

//������
int main()
{
	double weight1, weight2;
	cout << "the boat of weight : ";
	cin >> weight1;
	cout << "the car of weight : ";
	cin >> weight2;
	//ʵ��������
	Boat b1(weight1);
	Car c1(weight2);
	//���㲢���������
	cout << "the total weight : " << getTotalWeight(b1, c1) << endl;
	return 0;
}

