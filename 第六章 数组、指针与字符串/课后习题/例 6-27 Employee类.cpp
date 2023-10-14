//例 6 - 27 Employee类
#include<iostream>
#include<string>
using namespace std;

//Employee类
class Employee
{
public:
	Employee(string name,string address,string city,string postcode) 
		    :name(name), address(address),city(city), postcode(postcode) {};
	void display()
	{
		cout << "姓名： " << name
			 << "\t地址： " << address
			 << "\t城市： " << city
			 << "\t邮编： " << postcode <<"\n" << endl;
	}
	void SetName(string main_name)
	{
		name = main_name;
	}
	string GetName(){return name;}
private:
	//姓名
	string name;
	//地址
	string address;
	//城市
	string city;
	//邮编
	string postcode;
};

int main()
{ 
	//初始化员工张三
	Employee a("张三", "合肥工业大学翡翠湖校区x号宿舍楼", "合肥市", "230000");
	Employee* pa = &a;
	//display功能展示
	cout << "显示" << pa->GetName() <<"信息：\n";
	pa->display();
	//SetName功能展示
	cout << "现将"<< pa->GetName() << "的名字改为： ";
	string chang_name;
	cin >> chang_name;
	pa->SetName(chang_name);
	
	cout << "\n显示" << pa->GetName() << "信息：\n";
	pa->display();
	return 0;
}