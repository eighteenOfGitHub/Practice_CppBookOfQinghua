//实验八  2（2）思考：使用虚基类只生成一个副本
#pragma warning( disable : 4996)
#include <iostream>	
#include <iomanip>
#include <string>
using namespace std;

class person
{
protected:
	char name[20];
	int birth_year;
public:
	person(const char* na, int year) {
		strcpy(name, na);
		birth_year = year;
	}
	int cal_age(int this_year) {
		return this_year - birth_year;
	}
};

class graduate :virtual public person
{
protected:
	int grade;
	char specialty[20];
public:
	graduate(const char* na, int y, int g, const char* spec) :person(na, y) {
		grade = g;
		strcpy(specialty, spec);
	}
	void display(int this_year) {
		cout << "           graduate    age  grade        specialty\n";
		cout << setw(20) << name << setw(5) << cal_age(this_year);
		cout << setw(7) << grade << setw(17) << specialty << endl;
	}
};

class teacher :virtual public person
{
protected:
	char title[15];
	char specialty[20];
public:
	teacher(const char* na, int y, const char* ti, const char* spec) :person(na, y) {
		strcpy(title, ti);
		strcpy(specialty, spec);
	}
	void display(int this_year) {
		cout << "           teacher    age         title        specialty\n";
		cout << setw(20) << name << setw(5) << cal_age(this_year);
		cout << setw(14) << title << setw(17) << specialty << endl;
	}
};

class in_service_graduate :public teacher, public graduate
{
public:
	in_service_graduate(const char* na, int y, const char* ti, const char* spec1, int g, const char* spec2) :
		person(na,y),teacher(na, y, ti, spec1), graduate(na, y, g, spec2){};
	void display(int this_year) {
		cout << " in_service_graduate  age   title   work_specialty  grade  study_specialty\n";
		cout << setw(20) << name
			<< setw(5) << teacher::cal_age(this_year)
			<< setw(8) << title
			<< setw(17) << teacher::specialty
			<< setw(7) << grade
			<< setw(17) << graduate::specialty << endl;
	}
};

int main()
{
	graduate gr("zhan g_ling", 1978, 2001, "computer");
	teacher te("wang_qiang", 1976, "tutor", "electronics");
	in_service_graduate sg("liu_hua", 1975, "lectuer", "automation", 2002, "computer");
	gr.display(2002);
	cout << endl;
	te.display(2002);
	cout << endl;
	sg.display(2002);
	return 0;
}