#include "queue.h"

/*
queue::queue(QObject *parent) : QObject(parent)
{

}
/*
ostream & operator<<(ostream & os, Date const & d)
{
    os << d.d << '.' << d.m << '.' << d.y << '\n';
    return os;
}
*/
MyListData queue::getMostPr()
{
    if(first){
        ListNode *q=first;
        if(q->next){
            while(q->next->next)
                q=q->next;
            MyListData inf=q->next->data;
            return inf;}
        else {
            MyListData inf=q->data;
            return inf;
        }
    }
    else throw "no elements";
}

MyListData queue::remMostPr()
{
    return removeLast();
}

bool queue::is_empty()
{
    if(first==NULL)return true;
    else return false;
}

istream &queue::operator>>(istream &is, queue &d)
{   int v,pr;
    is>>v>>pr;
    MyListData n;
    n.value=v;
    n.priority=pr;
    d.addPrior(n);
    return is;
}
