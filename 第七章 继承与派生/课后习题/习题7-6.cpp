//ϰ��7 - 6
#include<iostream>
using namespace std;

class Mammal{
public:
	Mammal() { cout << "����һ�����"<<endl; }
	~Mammal() { cout << "�����ˡ�"<<endl; }
};
class Dog :public Mammal
{
public: 
	Dog() { cout << "����һ���޹���"<< endl; }
	~Dog() { cout << "����ȥ���ˣ�" << endl; }
};
int main() {
	Dog chichi;
	return 0;
} 