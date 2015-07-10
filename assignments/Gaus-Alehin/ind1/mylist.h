#ifndef MYLIST_H
#define MYLIST_H

#include <QObject>

typedef
struct{
    int value;
    int priority;
} MyListData;


struct ListNode
{
    MyListData data;
    ListNode *next;
};

class MyList : public QObject
{
    Q_OBJECT
protected:
    ListNode *first;
    int co;
public:
    explicit MyList(QObject *parent = 0);
    MyList(const MyList &A);
    ~MyList();
    void addLast(MyListData newData);
    MyListData removeLast();
    MyListData getItem(int index) const;
    int count() const;
    int getCo();

public slots:
    void SetCount();

signals:
  void CountChanged(int newcount);
};

#endif // MYLIST_H
