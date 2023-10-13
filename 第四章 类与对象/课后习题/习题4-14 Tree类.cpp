//Ï°Ìâ4-14 TreeÀà
#include<iostream>
using namespace std;

class Tree
{
public:
	Tree(int new_age = 0) { ages = new_age; }
	void grow(int years)
	{
		ages += years;
	}
	int getages() { return ages; }
private:
	int ages;
};

int main()
{
	int years;
	cout << "Congratulation! You have a lovely tree. " << endl;
	cin >> years;
	Tree t(years);
	cout << "Your tree is " << t.getages() << " years age. " << endl;
	cin >> years;
	cout << years << " years later...";
	t.grow(years);
	cout << "Your tree is " << t.getages() << " years age now. " << endl;
	return 0;
}