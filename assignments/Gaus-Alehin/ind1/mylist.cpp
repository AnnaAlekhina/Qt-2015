#include "mylist.h"
#include "obr.h"

MyList::MyList(QObject *parent) : QObject(parent)
{
    first = nullptr;
}

MyList::~MyList()
{
    while(first){
        ListNode *t = first;
        first = first -> next;
        delete t;
    }
}

void MyList::addLast(MyListData newData)
{
    ListNode *t = new ListNode;
    t->data = newData;
    t->next = nullptr;
    if(first){
        ListNode *last = first;
        while(last->next)
            last = last->next;
        last->next = t;
    } else {
        first = t;
    }

    //emit CountChanged(count());
}

MyListData MyList::getItem(int index)const
{
    if(index<0)
        throw "index is out of bounds";
    if (!first)
        throw "empty list";

    ListNode *node = first;
    while(node && index){
        node = node->next;
        index--;
    }
    if (index == 0)
        return node->data;
    else
        throw "index is out of bounds";
}

int MyList::count() const{
    ListNode *q=first;
    int i=0;
    while(q){
        i++;
        q=q->next;
    }
    return i;
}

int MyList::getCo()
{
    return co;
}

MyListData MyList::removeLast(){
    if(first){
        ListNode *q=first;
        if(q->next){
            while(q->next->next)
                q=q->next;
            MyListData inf=q->next->data;
            delete q->next ;
            q->next=NULL;
            return inf;}
        else {
            MyListData inf=q->data;
            delete q;
            first=NULL;
            return inf;
        }
    }
    else throw "no elements";
   // emit CountChanged(count());
}

void MyList::SetCount(){
    co=count();
}
