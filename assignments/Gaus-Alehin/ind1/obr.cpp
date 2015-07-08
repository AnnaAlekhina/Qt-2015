#include "obr.h"
#include <iostream>
using namespace std;
Obr::Obr(QObject *parent) : QObject(parent)
{

}

void Obr::CountChanged(int newcount){

    cout<<"new count = "<<newcount<<endl;


}

