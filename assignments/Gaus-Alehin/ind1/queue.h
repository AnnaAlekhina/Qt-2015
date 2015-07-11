#ifndef QUEUE_H
#define QUEUE_H

#include <QObject>
#include "mylist.h"
#include <iostream>
using namespace std;

class queue : public MyList
{
    Q_OBJECT

public:
    explicit queue(QObject *parent = 0);
    queue(queue const &A);
    queue &operator=(queue &A);
    void addPrior(MyListData x);
    MyListData getMostPr();//получение первого эл-та
    MyListData remMostPr();//извлечение первого
    bool is_empty();  
    queue& operator>>(MyListData &x);//извлечение из очереди
    queue& operator<<(MyListData const &x);//добавление в очередь
    queue operator+(queue &A);//слияние

    friend ostream& operator<<(ostream & os,  queue const & d);//вывод в поток
    friend istream& operator>>(istream & is, queue & d);//ввод в поток

};

ostream& operator<<(ostream & os,  queue const & d);//вывод в поток
istream& operator>>(istream & is, queue & d);//ввод в поток

#endif // QUEUE_H
