//œ∞Ã‚5-7 Cat¿‡
#include<iostream>
#include<string>
using namespace std;

class Cat
{
public:
	Cat();
	Cat(string a) :A(a) 
	{ 
		cout << "Cat : " << A << endl;
		numOfCat++;
	}
	static int getnumOfCat() { return numOfCat; }
private:
	string A;
	static int numOfCat;
};

int Cat::numOfCat = 0;

int main()
{
	string cat1,cat2;
	cat1 = "∞¢ª®";
	cat2 = "∞¢∑º";
	Cat c1(cat1), c2(cat2);
	cout << "Number of cat : " << Cat::getnumOfCat() << endl;
	return 0;
}
