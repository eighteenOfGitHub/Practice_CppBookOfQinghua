//��9 - 2 ��ģ��Ӧ�þ���
#include<iostream>
#include<cstdlib>
using namespace std;

struct Student
{
	int id;//ѧ��
	float gpa;//ƽ����
};

template<class T>  //��ģ�壺ʵ�ֶ������������ݽ��д�ȡ
class Store
{
private:
	T item;   //item ���ڴ���������͵�����
	bool haveValue;   //haveValue ��� item �Ƿ��ѱ���������
public:
	Store();
	T& getElem();   //��ȡ���ݺ���
	void putElem(const T& x);   //�������ݺ���
};

//����ʵ��
template<class T>   //Ĭ�Ϲ���ʵ��
Store<T>::Store():haveValue(false){}

template<class T>
T& Store<T>::getElem()
{
	if (!haveValue)
	{
		cout << "No item present!" << endl;   //�����ͼ��ȡδ��ʼ�������ݣ������ӳ���
		exit(1);   //ʹ������ȫ�˳������ص�����ϵͳ
		//���������ڱ�ʾ��ֹ��ԭ�򣬿��Ա�����ϵͳ����
	}
	return item;   //���ش�ŵ�ֵ
}

template<class T>
void Store<T>::putElem(const T& x)
{
	haveValue = true;   //��ʾ item ���Ѵ�������
	item = x;
}

int main()
{
	Store<int>s1, s2;  //�������� Store<int> ������������ݳ�Ա item Ϊ int ����
	s1.putElem(3);
	s2.putElem(-7);
	cout << s1.getElem() << " " << s2.getElem() << endl;

	Student g = { 1000, 23 };
	Store<Student>s3;
	s3.putElem(g);
	cout << "the student id is " << s3.getElem().id << endl;

	Store<double>d;
	cout << "retrieving object d��";
	cout << d.getElem() << endl;
	//����dδ����ʼ������ִ�к��� d.getElement() �����е��³�����ֹ

	return 0;
}

/*
���֣�
1.	���ֱ���������������棺δ��ʼ������Store<T>::item��
	֮���Ի����������ͬ�ģ� T Ϊ double��int��Student����
	����Ϊģ�屾���ڱ���ʱ���������κδ��룬ֻ����ģ�����ɵ�ʵ��������Ŀ�����
*/