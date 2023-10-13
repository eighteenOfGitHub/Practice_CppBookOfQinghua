#include<iostream>
#include<fstream>
using namespace std;

class Dog
{
public:
	unsigned age;		//年龄
	float weight;		//体重
	//默认构造
	Dog()
	{
		this->age = 0;
		this->weight = 0;
	}
	//有参构造
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
		cout << "年龄： " << age << " 体重： " << weight << endl;
	}
};

void text01()
{
	//文本方式
	Dog dog1(5, 10);

	ofstream ofs("文本dog.txt", ios_base::out);
	ofs.write(reinterpret_cast<char*>(&dog1), sizeof(Dog));
	ofs.close();

	dog1.show();

	Dog dog2;
	ifstream ifs("文本dog.txt", ios_base::in);
	ifs.read(reinterpret_cast<char*>(&dog2), sizeof(Dog));
	ifs.close();

	dog2.show();
}
void text02()
{
	//二进制方式
	Dog dog1(10, 15);

	ofstream ofs("二进制dog.txt", ios_base::out | ios_base::binary);
	ofs.write(reinterpret_cast<char*>(&dog1), sizeof(Dog));
	ofs.close();

	dog1.show();

	Dog dog2;
	ifstream ifs("二进制dog.txt", ios_base::in | ios_base::binary);
	ifs.read(reinterpret_cast<char*>(&dog2), sizeof(Dog));
	ifs.close();

	dog2.show();
}
int main()
{

	text01();	//文本方式

	text02();	//二进制方式

	return 0;
}