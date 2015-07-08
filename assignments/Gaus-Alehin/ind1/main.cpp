#include <QCoreApplication>
#include <iostream>
#include "test_mylist.h"
#include "mylist.h"


using namespace std;

int main(int argc, char *argv[])
{   MyList A;
    QCoreApplication a(argc, argv);
    /*QTest::qExec(new Test_MyList, argc, argv);

    Obr B;
    QObject::connect(&A, SIGNAL(CountChanged(int)),
               &B, SLOT(CountChanged(int)));

    QObject::connect(&A, SIGNAL(CountChanged(int)),
               &A, SLOT(SetCount()));

    for(int i=0;i<3; i++){
        A.addLast(3);
        cout<<A.getCo()<<endl;}

*/
    return 0;
}
