//6.2.8 用指针作为函数参数 例6-10 读入浮点数，输出整数部分和小数部分 
#include<iostream> 
using namespace std;

//将实数x分成小数部分和整数部分，形参 intpart，fracpart是整数
  void splitfloat (float x,int *intpart,float *fracpart )
{
	*intpart = static_cast<int>(x);//整数部分
	*fracpart = x - *intpart;//小数部分 
}

int main()
{
	cout <<" enter 3 float point numbers : "<< endl;
	for(int i=0;i<3;i++)
	{
		
		float x,f;
		int  n;
		cin>>x;
		splitfloat(x,&n,&f);//变量地址作为参数
		cout<< "Interger Part = "<<n<< "; Fraction Part = "<<f<<endl;
		 
	}
	
	return 0;
}
 
 
 //子函数中改变intpart的值，其结果会影响主函数中变量n的值，本例题可以用引用传递达到同样的效果


 //引用传递 
//   void splitfloat (float x,int &n,float &f)
//{
//	n = static_cast<int>(x);//整数部分
//	f = x - n;//小数部分 
//}
//
//int main()
//{
//	cout <<" enter 3 float point numbers : "<< endl;
//	for(int i=0;i<3;i++)
//	{
//		
//		float x,f;
//		int  n;
//		cin>>x;
//		splitfloat(x,n,f);//变量地址作为参数
//		cout<< "Interger Part = "<<n<< "; Fraction Part = "<<f<<endl;
//		 
//	}
//	
//	return 0;
//}
