//ϰ��7 - 8
#include<iostream>
#include<string>
using namespace std;

class Document
{
public:
	Document(string name) :name(name) {};
	void getname() { cout << "�Ȿ������ֽУ�" << name << endl; }
private:
	string name;
};

class Book :public Document
{
public:
	Book(string name, unsigned page) :Document(name),page(page){};
	void getpage() { cout << "�Ȿ���У�" << page <<" ҳ��" << endl; }
private:
	unsigned page;
};


int main()
{
	Book book1("TheLittlePrince", 1900);
	book1.getname();
	book1.getpage();
	return 0;
}