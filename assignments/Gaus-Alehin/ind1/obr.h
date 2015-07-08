#ifndef OBR_H
#define OBR_H

#include <QObject>

class Obr : public QObject
{
    Q_OBJECT
public:
    explicit Obr(QObject *parent = 0);

public slots:
    void CountChanged(int newcount);

};

#endif // OBR_H
