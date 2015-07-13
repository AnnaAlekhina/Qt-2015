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
    char ch[30];
    cout<<"name file: "<<endl;
    cin.getline(ch,30);
    MyListData dat;
    ifstream fin(ch);
    ofstream fout("NewFile.txt");
    cout<<"create new file "<<endl;
    if(fin.is_open()){
        while(!fin.eof()){
            fin.getline(dat.str,30);
            dat.priority=strlen(dat.str);
            que.addPrior(dat);
        }
    }
    fout<<que;
    fout.close();
    fin.close();
    return 0;
}
