//4.3.4 eg 4-3游泳池改造预算circle类
#include<iostream>
using namespace std;
 
const float pi=3.141593;
const float fenceprice=35;
const float concreteprice=20;

class circle
{
public:
	circle(float x);
	float c();
	float s();
private:
	float r;	
};

circle::circle(float x){r=x;}
float circle::c(){return 2*pi*r;}
float circle::s(){return pi*r*r;}

int main()
{
	float r;
	cout<<"enter the r of the pool:";
	cin>>r;
	circle a(r);
	circle b(r+3);
	float fencecost=b.c()*fenceprice;
	cout<<"fencing cost is "<<fencecost<<endl;
	float concretecost=(b.s()-a.s())*concreteprice;
	cout<<"concrete cost is "<<concretecost<<endl;
	return 0;
  }  
