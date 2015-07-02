#include "mypoint.h"

MyPoint::MyPoint(QObject *parent) : QObject(parent)
{

}

int MyPoint::max(int a, int b)
{
    return a>b?a:b;
}

