#include "test_queue.h"
#include "queue.h"

test_queue::test_queue(QObject *parent) : QObject(parent)
{

}

void test_queue::addPrior()
{
    queue L;
    MyListData x, y;
    x.priority=1;
    y.priority=2;
    L.addPrior(x);
    QCOMPARE(L.getItem(0).priority, 1);
    L.addPrior(y);
    QCOMPARE(L.getItem(0).priority, 1);
    QCOMPARE(L.getItem(1).priority, 2);

}

void test_queue::getMostPr()
{
    queue L;
    MyListData x, y;
    x.priority=1;
    y.priority=4;
    L.addPrior(x);
    L.addPrior(y);
    QCOMPARE(L.getMostPr().priority, 4);

}

void test_queue::remMostPr()
{
    queue L;
    MyListData x, y;
    x.priority=1;
    y.priority=4;
    L.addPrior(x);
    L.addPrior(y);
    QCOMPARE(L.remMostPr().priority, 4);
    QCOMPARE(L.getMostPr().priority, 1);

}

void test_queue::operatorEq()
{
      queue L,Q;
      MyListData x, y;
      x.priority=1;
      y.priority=4;
      L.addPrior(x);
      Q=L;
      QCOMPARE(L.getMostPr().priority, Q.getMostPr().priority);
}

void test_queue::operatorOut()
{
    queue L;
    MyListData x, y, z;
    x.priority=5;
    y.priority=4;
    L.addPrior(x);
    L.addPrior(y);
    L<<x;
    z=L.getMostPr();
    QCOMPARE(x.priority, z.priority);

}

void test_queue::operatorIn()
{
    queue L;
    MyListData x, y;
    x.priority=5;
    y.priority=4;
    L.addPrior(x);
    L>>y;
    QCOMPARE(x.priority, y.priority);
}

void test_queue::operatorAdd()
{
    MyListData x, y, z, a;
    queue L, Q, A;

    cin.getline(x.str,30);
    cin.getline(y.str,30);
    cin.getline(z.str,30);
    cin.getline(a.str,30);
    x.priority=5;
    y.priority=4;
    z.priority=6;
    a.priority=7;
    L.addPrior(x);
    L.addPrior(y);
    Q.addPrior(z);
    Q.addPrior(a);
    cout<<Q;
    cout<<L;

    A=Q+L;
    cout<<A;
    QCOMPARE(A.getMostPr().priority, 7 );

}

void test_queue::is_empty()
{
    queue L;
    MyListData x;
    x.priority=5;
    L.addPrior(x);
    QCOMPARE(L.is_empty(), false);

}




