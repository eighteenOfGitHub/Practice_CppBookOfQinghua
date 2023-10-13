//习题7 - 6
#include<iostream>
using namespace std;

class Mammal{
public:
	Mammal() { cout << "这有一个动物，"<<endl; }
	~Mammal() { cout << "就走了。"<<endl; }
};
class Dog :public Mammal
{
public: 
	Dog() { cout << "它是一条修勾。"<< endl; }
	~Dog() { cout << "它跑去玩了，" << endl; }
};
int main() {
	Dog chichi;
	return 0;
} 