//6.2.8 ��ָ����Ϊ�������� ��6-10 ���븡����������������ֺ�С������ 
#include<iostream> 
using namespace std;

//��ʵ��x�ֳ�С�����ֺ��������֣��β� intpart��fracpart������
  void splitfloat (float x,int *intpart,float *fracpart )
{
	*intpart = static_cast<int>(x);//��������
	*fracpart = x - *intpart;//С������ 
}

int main()
{
	cout <<" enter 3 float point numbers : "<< endl;
	for(int i=0;i<3;i++)
	{
		
		float x,f;
		int  n;
		cin>>x;
		splitfloat(x,&n,&f);//������ַ��Ϊ����
		cout<< "Interger Part = "<<n<< "; Fraction Part = "<<f<<endl;
		 
	}
	
	return 0;
}
 
 
 //�Ӻ����иı�intpart��ֵ��������Ӱ���������б���n��ֵ����������������ô��ݴﵽͬ����Ч��


 //���ô��� 
//   void splitfloat (float x,int &n,float &f)
//{
//	n = static_cast<int>(x);//��������
//	f = x - n;//С������ 
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
//		splitfloat(x,n,f);//������ַ��Ϊ����
//		cout<< "Interger Part = "<<n<< "; Fraction Part = "<<f<<endl;
//		 
//	}
//	
//	return 0;
//}
