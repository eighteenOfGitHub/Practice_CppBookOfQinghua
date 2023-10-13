#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include<cassert>

//������ģ�嶨��
template<class T>
class Array
{
private:
	T* list;	// T ����ָ�룬���ڴ�Ŷ�̬����������ڴ��׵�ַ
	int size;	//�����С��Ԫ�ظ�����
public:
	Array(int sz = 50);			//���캯��
	Array(const Array<T>& a);	//���ƹ��캯��
	~Array();					//��������
	Array<T>& operator= (const Array<T>& rhs);	//���� ��=�� ʹ�������������帳ֵ
	T& operator [] (int i);		//���� ��[]�� ��ʹ Array ���������c++��ͨ���������
	const T& operator [] (int i) const;			// ��[]�� �������� const ������
	operator T* ();				//���صõ� T* ���͵�ת����ʹ Array ���������c++��ͨ���������
	operator const T* () const;	//�� T* ����ת����������� const ������
	int getSize() const;		//ȡ����Ĵ�С
	void resize(int sz);		//�޸�����Ĵ�С
};


//���캯��
template<class T>
Array<T>::Array(int sz)
{
	assert(sz >= 0);			// sz Ϊ�����С��Ԫ�ظ�������Ӧ���Ǹ�
	size = sz;					//��ֵ
	list = new T(size);			//��̬���� size ��T���͵�Ԫ�ؿռ�
}

//��������
template<class T>
Array<T>::~Array()
{
	delete list;
}

//���ƹ��캯��
template<class T>
Array<T>::Array(const Array<T>& a)
{
	//�Ӷ��� a ȡ�������С������ֵ����ǰ����ĳ�Ա
	size = a.size;
	//Ϊ���������ڴ沢���г�����
	list = new T(size);			//��̬���� size �� T ���͵�Ԫ�ؿռ�
	//�Ӷ��� a ��������Ԫ�ص�������
	for (int i = 0; i < size; i++)
	{
		list[i] = a.list[i];
	}
}

//���� ��=�� ������������� ths ��ֵ��������ʵ�ֶ�������帳ֵ
template<class T>
Array<T>& Array<T>::operator= (const Array<T>& rhs)
{
	if (&rhs != this)
	{
		//����������������С�� rhs ��ͬ����ɾ��ԭ���ڴ棬Ȼ�����·���
		if (size != rhs.size)
		{
			delete[] list;		//ɾ������ԭ���ڴ�
			size = rhs.size;	//���ñ���������ִ�С
			list = new T(size);	//���·��� size ��Ԫ�ص��ڴ�                              
		}
		//�Ӷ��� rhs ��ֵ����Ԫ�ص�������
		for (int i = 0; i < size; i++)
			list[i] = rhs.list[i];
	}
	return *this;
}

//�����±��������ʵ������ͨ����һ��ͨ���±����Ԫ�أ����Ҿ���Խ���鹦��
template<class T>
T& Array<T>::operator[] (int n)
{
	assert(n >= 0 && n < size);	//����±��Ƿ�Խ��
	return list[n];				//�����±�Ϊn������Ԫ��
}

template<class T>
const T& Array<T>::operator[] (int n) const
{
	assert(n >= 0 && n < size);	//����±��Ƿ�Խ��
	return list[n];				//�����±�Ϊn������Ԫ��
}
//����ָ��ת����������� Array ��Ķ�����ת��Ϊ T ���͵�ָ�룬
//ֱ�ߵ�ǰ�����˽������
//���������ʹ����ͨ�����׵�ַһ���� Array ��Ķ���
template <class T>
Array<T>::operator T* ()
{
	return list;				//���ص�ǰ������˽��������׵�ַ
}

template <class T>
Array<T>::operator const T* ()const
{
	return list;
}

//ȡ��ǰ����Ĵ�С
template<class T>
int Array<T>::getSize() const
{
	return size;
}

//�������С�޸�Ϊ sz
template<class T>
void Array<T>::resize(int sz)
{
	assert(sz >= 0);			//��� sz �Ƿ�Ǹ�
	if (sz == size)				//���ָ���Ĵ�С��ԭ�д�Сһ����ʲôҲ����
		return;
	T* newList = new T[sz];		//�����µ������ڴ�
	int n = (sz < size) ? sz : size;		//�� sz �� size �н�С��һ����ֵ�� n
	//��ԭ��������ǰ n ��Ԫ�ظ��Ƶ���������
	for (int i = 0; i < n; i++)
		newList[i] = list[i];
	delete[] list;				//ɾ��ԭ����
	list = newList;				//ʹ list ֱ��������
	size = sz;					//���� size
}
#endif//ARRAY_H	
