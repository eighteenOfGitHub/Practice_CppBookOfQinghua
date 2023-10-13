//ʵ��� 2��1��
#include<iostream>
#include<conio.h>
using namespace std;

// enum bool {false,true};
struct element {  //���������еĽ��ṹ
    int val;
    element* next;
};

class list {  //����������
    element* elems;
public:
    list() { elems = 0; }
    ~list();
    virtual bool insert(int);  //���麯�����������п����¶���
    virtual bool deletes(int); //���麯�����������п����¶���
    bool contain(int);         //��Ԫ��val���������Ƿ����
    void print();
};

class set :public list {   //��������set����Ϊ������list��������
    int card;
public:
    set() { card = 0; }
    bool insert(int);  //�ض���˺���
    bool deletes(int); //�ض���˺���
};

list::~list()  //list��������������壬ѭ���ͷŸ�Ԫ����ռ�Ĵ洢
{
    element* tmp = elems;
    for (element* elem = elems; elem != 0;)
    {
        tmp = elem;
        elem = elem->next;
        delete tmp;
    }
}

bool list::insert(int val)   //����list���в���Ԫ�صĳ�Ա����
{
    element* elem = new element;  //Ϊ��Ԫ�ط���洢
    if (elem != 0) {
        elem->val = val;    //����Ԫ�ز��뵽����ͷ
        elem->next = elems;
        elems = elem;
        return true;
    }
    else return false;
}

bool list::deletes(int val)   //����list����ɾ��Ԫ�صĳ�Ա����
{
    if (elems == 0) return false;    //����Ϊ�գ�����false
    element* tmp = elems;
    if (elems->val == val)
    {                     //����ɾ����Ԫ��Ϊ��ͷԪ��
        elems = elems->next;
        delete tmp;
        return true;
    }
    else
        for (element* elem = elems; elem->next != 0; elem = elem->next)
            if (elem->next->val == val)
            {                     //ѭ�����Ҵ�ɾ��Ԫ��
                tmp = elem->next;
                elem->next = tmp->next;
                delete tmp;
                return true;
            }
    return false;
}

bool list::contain(int val)
{                       //��Ԫ��val���������Ƿ����
    if (elems == 0)return false;
    if (elems->val == val) return true;
    else
        for (element* elem = elems; elem->next != 0; elem = elem->next)
            if (elem->next->val == val)
                return true;
    return false;
}

void list::print()   //��������и�Ԫ��
{
    if (elems == 0) return;
    for (element* elem = elems; elem != 0; elem = elem->next)
        cout << elem->val << "  ";
    cout << endl;
}

bool set::insert(int val)  //��set���е�insert���ض���汾
{
    if (contain(val) ? 0 : list::insert(val))  //����˫Ŀ�������ʵ���ж�������Ĺ���
    {         //���жϴ�Ԫ���Ƿ���ڣ�Ȼ���ٵ��û���Ĵ˺����汾
        ++card;
        return true;
    }
    return false;
}

bool set::deletes(int val) //��set���е�deletes���ض���汾
{
    if (list::deletes(val))  //���û����еĴ˺����汾
    {
        --card;
        return true;
    }
    return false;
}

int main()
{
    list* ptr;
    list list1;
    set set1;
    ptr = &list1;
    ptr->insert(30);
    ptr->insert(40);
    ptr->insert(543);
    ptr->insert(40);
    ptr->print();
    ptr = &set1;
    ptr->insert(23);
    ptr->insert(672);
    ptr->insert(456);
    ptr->insert(23);
    ptr->print();
    return 1;
}
