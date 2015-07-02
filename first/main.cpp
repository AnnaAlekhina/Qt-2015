#include <QCoreApplication>
#include <QtTest/QTest>

#include <iostream>
#include "test_mypoint.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout<<"Hello, world!"<<std::endl;
    QTest::qExec(new Test_MyPoint,argc,argv);
    return a.exec();
}
