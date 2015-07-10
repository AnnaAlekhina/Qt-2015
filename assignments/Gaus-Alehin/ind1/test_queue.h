#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

#include <QObject>
#include <QTest>

class test_queue : public QObject
{
    Q_OBJECT
public:
    explicit test_queue(QObject *parent = 0);

public slots:

};

#endif // TEST_QUEUE_H
