#ifndef QUEUE_H
#define QUEUE_H

#include <QObject>
#include "mylist.h"

class queue : public MyList
{
    Q_OBJECT

public:
    queue::queue(queue const &A);
    void addPrior(MyListData x);
    MyListData getMostPr();//получение первого эл-та
    MyListData remMostPr();//извлечение первого
    bool is_empty();  
    //queue& operator>>(MyListData &x);//извлечение из очереди
    //queue& operator<<(MyListData const &x);//добавление в очередь
    queue operator+(queue &A);//слияние

    //friend ostream & operator<<(ostream & os,  queue & d);
    //friend istream & operator>>(istream & is, queue & d);

};
#endif // QUEUE_H
