//Ï°Ìâ8 - 4 CounterÀà
#include<iostream>
using namespace std;

class Counter
{
public:
	Counter(double val = 0) :val(val){};
	double GetVal() { return val; }
	Counter operator+(Counter val2)
	{
		return Counter(val + val2.GetVal());
	}
private:
	double val;
};

int main() {
	Counter num1(2), num2(3), num3;
	cout << endl;
	cout << "   " << num1.GetVal() << " + " << num2.GetVal() << " = ";
	num3 = num1 + num2;
	cout << num3.GetVal() << endl;
	return 0;
}