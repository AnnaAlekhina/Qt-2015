#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include "test_mylist.h"
#include "test_queue.h"
#include "mylist.h"
#include "queue.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTest::qExec(new test_queue, argc, argv);
    /*
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
    ofstream fout("NewFile.txt");

    if(fin.is_open()){
        while(!fin.fail()){
            fin.getline(dat.str,30);
            dat.priority=strlen(dat.str);
            que.addPrior(dat);
        }
    }

    for(int i=0 ;i<que.count();++i){
        dat2=que.getItem(i);
        fout<<dat2.str<<"\n";
    }

    return 0;
}
