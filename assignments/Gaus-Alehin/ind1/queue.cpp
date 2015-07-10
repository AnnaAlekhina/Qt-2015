#include "queue.h"


queue::queue(QObject *parent) : MyList(parent)
{

}

queue::queue(const queue &A)
{
    co=A.co;
    first=A.first;

}


void queue::addPrior(MyListData x)
{   ListNode* p=new ListNode;
    p->data=x;
    p->next=NULL;
    if(first){

        ListNode* q=first;
        if(p->data.priority>q->data.priority){
            if (q->next){
                while(q->next && p->data.priority>q->next->data.priority)
                    q=q->next;
                p->next=q->next;
                q->next=p;
            }
            else{
                if(p->data.priority > first->data.priority){
                    first->next=p;
                }
                else{
                    p->next=first;
                    first=p;
                }
            }

        }
        else    {
            p->next=first;
            first=p;
        }
    }
    else       first=p;
}


istream &operator>>(istream &is, queue &d)
{   MyListData n;
    is.getline(n.str,30);
    int pr;
    is>>pr;
    n.priority=pr;
    d.addPrior(n);
    return is;
}//не работает

ostream &operator<<(ostream & os, queue const & d)
{   MyListData dat;

    for(int i=0; i<d.count(); i++){
        dat=d.getItem(i);
        os<<dat.str<<" "<<dat.priority;
  }
    return os;
}//не работает


queue &queue::operator<<(MyListData const &x)
{
    addPrior(x);
    return *this;
}

queue &queue::operator>>(MyListData &x)
{
    x=remMostPr();
    return *this;
}//не работает

queue queue::operator+(queue &A)
{
    queue q=A;
    MyListData d;
    for(int i=0; i<count();i++){
        d=getItem(i);
        q.addPrior(d);
    }
    return q;
}

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




