//实验十 （2）
#include<iostream>
using namespace std;
enum result {  have/*=0*/, not_have/*=1*/ };

class CharArray
{
	char array[100]{};
public:
	char getarray(int i) { return array[i]; }
	bool search(char& A);   //查重
	friend CharArray operator+(CharArray& A, CharArray& B);    //重载并集+
	friend CharArray operator-(CharArray& A, CharArray& B);    //重载差集-
	friend CharArray operator*(CharArray& A, CharArray& B);    //重载交集*
	friend ostream& operator<<(ostream& out, CharArray&); //重载输出<<
	friend istream& operator>>(istream& in, CharArray&);  //重载输入>>
};

//查重
bool CharArray::search(char& A)//对象是被检查
{
		for (int j = 0; array[j] != '\0'; j++)
		{
			if (array[j] == A) return have;
		}
	return not_have;
}

//重载输入>>
istream& operator>>(istream& in, CharArray &A) {
	cout << "该集合元素个数为：";
	int q = 0;
	in >> q;
	cout << "输入集合元素：";
	for (int i = 0; i != q; ++i){ in >> A.array[i] ; }
	return in;
}

//重载输出<<
ostream& operator<<(ostream& out, CharArray &A) {
	for (int i = 0; A.array[i] != '\0'; i++)
	{
		out << A.array[i] << ", ";
	}
	out << "\b\b";
	return out;
}

//重载并集+
CharArray operator+(CharArray &A, CharArray &B)
{
	CharArray temp = A;
	int temp_len = 0;
	for (int i = 0; B.array[i] != '\0'; i++)temp_len++;//计算A的长度;
	for (int i = 0; B.array[i] != '\0'; i++)
	{
		if (A.search(B.array[i]))
		{
			temp.array[temp_len] = B.array[i];
			temp_len++;
		}
	}
	return temp;
}

//重载差集-
CharArray operator-(CharArray& A, CharArray& B)
{
	CharArray temp;
	int temp_len = 0;
	for (int i = 0; A.array[i] != '\0'; i++)
	{
		if (B.search(A.array[i]))
		{
			temp.array[temp_len] = A.array[i];
			temp_len++;
		}
	}
	return temp;
}

//重载交集*
CharArray operator*(CharArray& A, CharArray& B)
{
	CharArray temp;
	int temp_len = 0;
	for (int i = 0; A.array[i] != '\0'; i++)
	{
		if (B.search(A.array[i])==0)
		{
			temp.array[temp_len] = A.array[i];
			temp_len++;
		}
	}
	return temp;
}

int main()
{
	CharArray a1, a2,a3,a4,a5;
	cin >> a1;
	cout << "a1 = { " << a1 << " } " << endl << endl;
	cin >> a2;
	cout << "a2 = { " << a2 << " } " << endl << endl;
	a3 = a1 + a2;
	a4 = a1 - a2;
	a5 = a1 * a2;
	cout << "并集：  a1 + a2 = { " << a3 << " } " << endl;
	if (a4.getarray(0) == '\0')cout << "差集：  a1 - a2 = 空集" << endl;
	else {
		cout << "差集：  a1 - a2 = { " << a4 << " } " << endl;
	}
	cout << "交集：  a1 * a2 = { " << a5 << " } " << endl;
	system("pause");
	return 0;
}