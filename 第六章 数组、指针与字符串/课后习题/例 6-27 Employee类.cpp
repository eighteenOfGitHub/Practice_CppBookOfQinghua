//�� 6 - 27 Employee��
#include<iostream>
#include<string>
using namespace std;

//Employee��
class Employee
{
public:
	Employee(string name,string address,string city,string postcode) 
		    :name(name), address(address),city(city), postcode(postcode) {};
	void display()
	{
		cout << "������ " << name
			 << "\t��ַ�� " << address
			 << "\t���У� " << city
			 << "\t�ʱࣺ " << postcode <<"\n" << endl;
	}
	void SetName(string main_name)
	{
		name = main_name;
	}
	string GetName(){return name;}
private:
	//����
	string name;
	//��ַ
	string address;
	//����
	string city;
	//�ʱ�
	string postcode;
};

int main()
{ 
	//��ʼ��Ա������
	Employee a("����", "�Ϸʹ�ҵ��ѧ����У��x������¥", "�Ϸ���", "230000");
	Employee* pa = &a;
	//display����չʾ
	cout << "��ʾ" << pa->GetName() <<"��Ϣ��\n";
	pa->display();
	//SetName����չʾ
	cout << "�ֽ�"<< pa->GetName() << "�����ָ�Ϊ�� ";
	string chang_name;
	cin >> chang_name;
	pa->SetName(chang_name);
	
	cout << "\n��ʾ" << pa->GetName() << "��Ϣ��\n";
	pa->display();
	return 0;
}