#include<iostream>
#include<fstream>
using namespace std;

class Dog
{
public:
	unsigned age;		//����
	float weight;		//����
	//Ĭ�Ϲ���
	Dog()
	{
		this->age = 0;
		this->weight = 0;
	}
	//�вι���
	Dog(unsigned age, float weight) :age(age), weight(weight){}
	
	void setage(unsigned age)
	{
		this->age = age;
	}
	void setage(float weight)
	{
		this->weight = weight;
	}

	void show()
	{
		cout << "���䣺 " << age << " ���أ� " << weight << endl;
	}
};

void text01()
{
	//�ı���ʽ
	Dog dog1(5, 10);

	ofstream ofs("�ı�dog.txt", ios_base::out);
	ofs.write(reinterpret_cast<char*>(&dog1), sizeof(Dog));
	ofs.close();

	dog1.show();

	Dog dog2;
	ifstream ifs("�ı�dog.txt", ios_base::in);
	ifs.read(reinterpret_cast<char*>(&dog2), sizeof(Dog));
	ifs.close();

	dog2.show();
}
void text02()
{
	//�����Ʒ�ʽ
	Dog dog1(10, 15);

	ofstream ofs("������dog.txt", ios_base::out | ios_base::binary);
	ofs.write(reinterpret_cast<char*>(&dog1), sizeof(Dog));
	ofs.close();

	dog1.show();

	Dog dog2;
	ifstream ifs("������dog.txt", ios_base::in | ios_base::binary);
	ifs.read(reinterpret_cast<char*>(&dog2), sizeof(Dog));
	ifs.close();

	dog2.show();
}
int main()
{

	text01();	//�ı���ʽ

	text02();	//�����Ʒ�ʽ

	return 0;
}