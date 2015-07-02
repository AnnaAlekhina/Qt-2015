#include <QTest>
#include "test_mypoint.h"
#include "mypoint.h"

Test_MyPoint::Test_MyPoint(QObject *parent) : QObject(parent)
{

}

void Test_MyPoint::max(){
    MyPoint p;
    QCOMPARE(p.max(0,1),1);

}
