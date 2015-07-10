#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include "test_mylist.h"
#include "mylist.h"
#include "queue.h"
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
    queue que;
    MyListData dat;
    MyListData dat2;
    ifstream fin("TextFile.txt");
    if(fin.is_open()){

        while(!fin.fail()){
            fin.getline(dat.str,30);
            //cout<<dat.str<<endl;
            dat.priority=strlen(dat.str);
            //cout<<dat.priority<<endl;

            que.addPrior(dat);
            for(int i=0 ;i<que.count();++i){
            dat2=que.getItem(i);
            cout<<dat2.str<<endl;}
            cout<<"==================="<<endl;
        }
    }

    return 0;
}
