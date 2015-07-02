#ifndef MYPOINT_H
#define MYPOINT_H

#include <QObject>

class MyPoint : public QObject
{
    Q_OBJECT
public:
    explicit MyPoint(QObject *parent = 0);


public slots:
    int max (int, int);
};

#endif // MYPOINT_H
