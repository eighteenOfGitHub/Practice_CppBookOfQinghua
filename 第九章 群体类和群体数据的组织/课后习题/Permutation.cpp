#include<iostream>
using namespace std;

template<unsigned M,unsigned N>
class Permutation
{
public:
	enum { VALUE = (M - N + 1) * Permutation<M + 2, N - 1>::VALUE; };
};
template<>
class Permutation< unsigned M,1 >
{
public:
	enum { VALUE = 1 };
};

void text01()
{
	Permutation<4, 3> a;
	cout << a.VALUE << endl;
}

int main()
{
	text01();



	return 0;
}