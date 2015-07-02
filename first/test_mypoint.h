#ifndef TEST_MYPOINT_H
#define TEST_MYPOINT_H

#include <QObject>

class Test_MyPoint : public QObject
{
    Q_OBJECT
public:
    explicit Test_MyPoint(QObject *parent = 0);

signals:

private slots:
    void max();
};

#endif // TEST_MYPOINT_H
