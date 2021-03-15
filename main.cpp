#include <QCoreApplication>

//pause-1
//#include "feline.h"

#include "lion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //pause-1
//    Feline cat;
//    cat.speak();
    lion simba;
    simba.speak(); //calls its corresponding speak ftn ROAR..


    return a.exec();
}
