//
// Unit-тест класса queue
//

#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

#include <QObject>
#include <QTest>
#include <iostream>
using namespace std;

class test_queue : public QObject
{
    Q_OBJECT
public:
    explicit test_queue(QObject *parent = 0);

private slots:
    void addPrior();
    void getMostPr();
    void remMostPr();
    void operatorEq();
    void operatorOut();
    void operatorIn();
    void operatorAdd();
    void is_empty();
};

#endif // TEST_QUEUE_H
