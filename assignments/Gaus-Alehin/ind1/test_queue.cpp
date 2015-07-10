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




