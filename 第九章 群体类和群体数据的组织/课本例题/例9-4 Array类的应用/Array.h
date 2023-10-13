#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include<cassert>

//数组类模板定义
template<class T>
class Array
{
private:
	T* list;	// T 类型指针，用于存放动态分配的数组内存首地址
	int size;	//数组大小（元素个数）
public:
	Array(int sz = 50);			//构造函数
	Array(const Array<T>& a);	//复制构造函数
	~Array();					//析构函数
	Array<T>& operator= (const Array<T>& rhs);	//重载 “=” 使数组对象可以整体赋值
	T& operator [] (int i);		//重载 “[]” ，使 Array 对象可以起到c++普通数组的作用
	const T& operator [] (int i) const;			// “[]” 运算符针对 const 的重载
	operator T* ();				//重载得到 T* 类型的转换，使 Array 对象可以起到c++普通数组的作用
	operator const T* () const;	//到 T* 类型转换操作符针对 const 的重载
	int getSize() const;		//取数组的大小
	void resize(int sz);		//修改数组的大小
};


//构造函数
template<class T>
Array<T>::Array(int sz)
{
	assert(sz >= 0);			// sz 为数组大小（元素个数），应当非负
	size = sz;					//赋值
	list = new T(size);			//动态分配 size 个T类型的元素空间
}

//析构函数
template<class T>
Array<T>::~Array()
{
	delete list;
}

//复制构造函数
template<class T>
Array<T>::Array(const Array<T>& a)
{
	//从对象 a 取得数组大小，并赋值给当前对象的成员
	size = a.size;
	//为对象申请内存并进行出错检查
	list = new T(size);			//动态分配 size 个 T 类型的元素空间
	//从对象 a 复制数组元素到本对象
	for (int i = 0; i < size; i++)
	{
		list[i] = a.list[i];
	}
}

//重载 “=” 运算符，将对象 ths 赋值给本对象，实现对象的整体赋值
template<class T>
Array<T>& Array<T>::operator= (const Array<T>& rhs)
{
	if (&rhs != this)
	{
		//如果本对象中数组大小与 rhs 不同，则删除原有内存，然后重新分配
		if (size != rhs.size)
		{
			delete[] list;		//删除数组原有内存
			size = rhs.size;	//设置本对象的数字大小
			list = new T(size);	//重新分配 size 个元素的内存                              
		}
		//从对象 rhs 赋值数组元素到本对象
		for (int i = 0; i < size; i++)
			list[i] = rhs.list[i];
	}
	return *this;
}

//重载下标运算符，实现与普通数组一样通过下标访问元素，并且具有越界检查功能
template<class T>
T& Array<T>::operator[] (int n)
{
	assert(n >= 0 && n < size);	//检查下标是否越界
	return list[n];				//返回下标为n的数组元素
}

template<class T>
const T& Array<T>::operator[] (int n) const
{
	assert(n >= 0 && n < size);	//检查下标是否越界
	return list[n];				//返回下标为n的数组元素
}
//重载指针转换运算符，将 Array 类的对象名转换为 T 类型的指针，
//直线当前对象的私有数组
//因而可以像使用普通数组首地址一样用 Array 类的对象
template <class T>
Array<T>::operator T* ()
{
	return list;				//返回当前对象中私有数组的首地址
}

template <class T>
Array<T>::operator const T* ()const
{
	return list;
}

//取当前数组的大小
template<class T>
int Array<T>::getSize() const
{
	return size;
}

//将数组大小修改为 sz
template<class T>
void Array<T>::resize(int sz)
{
	assert(sz >= 0);			//检查 sz 是否非负
	if (sz == size)				//如果指定的大小与原有大小一样，什么也不做
		return;
	T* newList = new T[sz];		//申请新的数组内存
	int n = (sz < size) ? sz : size;		//将 sz 与 size 中较小的一个赋值给 n
	//将原有数组中前 n 个元素复制到新数组中
	for (int i = 0; i < n; i++)
		newList[i] = list[i];
	delete[] list;				//删除原数组
	list = newList;				//使 list 直线新数组
	size = sz;					//更新 size
}
#endif//ARRAY_H	
