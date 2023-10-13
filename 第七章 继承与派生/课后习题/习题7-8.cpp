//习题7 - 8
#include<iostream>
#include<string>
using namespace std;

class Document
{
public:
	Document(string name) :name(name) {};
	void getname() { cout << "这本书的名字叫：" << name << endl; }
private:
	string name;
};

class Book :public Document
{
public:
	Book(string name, unsigned page) :Document(name),page(page){};
	void getpage() { cout << "这本书有：" << page <<" 页。" << endl; }
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