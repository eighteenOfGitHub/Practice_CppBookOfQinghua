//ʵ��ʮ ��2��
#include<iostream>
using namespace std;
enum result {  have/*=0*/, not_have/*=1*/ };

class CharArray
{
	char array[100]{};
public:
	char getarray(int i) { return array[i]; }
	bool search(char& A);   //����
	friend CharArray operator+(CharArray& A, CharArray& B);    //���ز���+
	friend CharArray operator-(CharArray& A, CharArray& B);    //���ز-
	friend CharArray operator*(CharArray& A, CharArray& B);    //���ؽ���*
	friend ostream& operator<<(ostream& out, CharArray&); //�������<<
	friend istream& operator>>(istream& in, CharArray&);  //��������>>
};

//����
bool CharArray::search(char& A)//�����Ǳ����
{
		for (int j = 0; array[j] != '\0'; j++)
		{
			if (array[j] == A) return have;
		}
	return not_have;
}

//��������>>
istream& operator>>(istream& in, CharArray &A) {
	cout << "�ü���Ԫ�ظ���Ϊ��";
	int q = 0;
	in >> q;
	cout << "���뼯��Ԫ�أ�";
	for (int i = 0; i != q; ++i){ in >> A.array[i] ; }
	return in;
}

//�������<<
ostream& operator<<(ostream& out, CharArray &A) {
	for (int i = 0; A.array[i] != '\0'; i++)
	{
		out << A.array[i] << ", ";
	}
	out << "\b\b";
	return out;
}

//���ز���+
CharArray operator+(CharArray &A, CharArray &B)
{
	CharArray temp = A;
	int temp_len = 0;
	for (int i = 0; B.array[i] != '\0'; i++)temp_len++;//����A�ĳ���;
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

//���ز-
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

//���ؽ���*
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
	cout << "������  a1 + a2 = { " << a3 << " } " << endl;
	if (a4.getarray(0) == '\0')cout << "���  a1 - a2 = �ռ�" << endl;
	else {
		cout << "���  a1 - a2 = { " << a4 << " } " << endl;
	}
	cout << "������  a1 * a2 = { " << a5 << " } " << endl;
	system("pause");
	return 0;
}