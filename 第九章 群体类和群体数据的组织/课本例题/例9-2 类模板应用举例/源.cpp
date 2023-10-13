//例9 - 2 类模板应用举例
#include<iostream>
#include<cstdlib>
using namespace std;

struct Student
{
	int id;//学号
	float gpa;//平均分
};

template<class T>  //类模板：实现对任意类型数据进行存取
class Store
{
private:
	T item;   //item 用于存放任意类型的数据
	bool haveValue;   //haveValue 标记 item 是否已被存入内容
public:
	Store();
	T& getElem();   //提取数据函数
	void putElem(const T& x);   //存入数据函数
};

//函数实现
template<class T>   //默认构造实现
Store<T>::Store():haveValue(false){}

template<class T>
T& Store<T>::getElem()
{
	if (!haveValue)
	{
		cout << "No item present!" << endl;   //如果试图提取未初始化的数据，则种子程序
		exit(1);   //使程序完全退出，返回到操作系统
		//参数可用于表示终止的原因，可以被操作系统接收
	}
	return item;   //返回存放的值
}

template<class T>
void Store<T>::putElem(const T& x)
{
	haveValue = true;   //表示 item 中已存入数据
	item = x;
}

int main()
{
	Store<int>s1, s2;  //定义两个 Store<int> 类对象，其中数据成员 item 为 int 类型
	s1.putElem(3);
	s2.putElem(-7);
	cout << s1.getElem() << " " << s2.getElem() << endl;

	Student g = { 1000, 23 };
	Store<Student>s3;
	s3.putElem(g);
	cout << "the student id is " << s3.getElem().id << endl;

	Store<double>d;
	cout << "retrieving object d…";
	cout << d.getElem() << endl;
	//由于d未经初始化，在执行函数 d.getElement() 过程中导致程序终止

	return 0;
}

/*
发现：
1.	发现编译后会出现三个警告：未初始化变量Store<T>::item。
	之所以会出现三个不同的（ T 为 double，int，Student），
	是因为模板本身在编译时不会生成任何代码，只有由模板生成的实例会生成目标代码
*/