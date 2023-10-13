//实验九 2（1）
#include<iostream>
#include<conio.h>
using namespace std;

// enum bool {false,true};
struct element {  //定义链表中的结点结构
    int val;
    element* next;
};

class list {  //定义链表类
    element* elems;
public:
    list() { elems = 0; }
    ~list();
    virtual bool insert(int);  //此虚函数在派生类中可重新定义
    virtual bool deletes(int); //此虚函数在派生类中可重新定义
    bool contain(int);         //判元素val在链表中是否存在
    void print();
};

class set :public list {   //将集合类set定义为链表类list的派生类
    int card;
public:
    set() { card = 0; }
    bool insert(int);  //重定义此函数
    bool deletes(int); //重定义此函数
};

list::~list()  //list类得析构函数定义，循环释放各元素所占的存储
{
    element* tmp = elems;
    for (element* elem = elems; elem != 0;)
    {
        tmp = elem;
        elem = elem->next;
        delete tmp;
    }
}

bool list::insert(int val)   //定义list类中插入元素的成员函数
{
    element* elem = new element;  //为新元素分配存储
    if (elem != 0) {
        elem->val = val;    //将新元素插入到链表头
        elem->next = elems;
        elems = elem;
        return true;
    }
    else return false;
}

bool list::deletes(int val)   //定义list类中删除元素的成员函数
{
    if (elems == 0) return false;    //若表为空，返回false
    element* tmp = elems;
    if (elems->val == val)
    {                     //若待删除的元素为表头元素
        elems = elems->next;
        delete tmp;
        return true;
    }
    else
        for (element* elem = elems; elem->next != 0; elem = elem->next)
            if (elem->next->val == val)
            {                     //循环查找待删除元素
                tmp = elem->next;
                elem->next = tmp->next;
                delete tmp;
                return true;
            }
    return false;
}

bool list::contain(int val)
{                       //判元素val在链表中是否存在
    if (elems == 0)return false;
    if (elems->val == val) return true;
    else
        for (element* elem = elems; elem->next != 0; elem = elem->next)
            if (elem->next->val == val)
                return true;
    return false;
}

void list::print()   //输出链表中各元素
{
    if (elems == 0) return;
    for (element* elem = elems; elem != 0; elem = elem->next)
        cout << elem->val << "  ";
    cout << endl;
}

bool set::insert(int val)  //在set类中的insert的重定义版本
{
    if (contain(val) ? 0 : list::insert(val))  //利用双目运算符，实现判断与运算的功能
    {         //先判断此元素是否存在，然后再调用基类的此函数版本
        ++card;
        return true;
    }
    return false;
}

bool set::deletes(int val) //在set类中的deletes的重定义版本
{
    if (list::deletes(val))  //调用基类中的此函数版本
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
