#include "lion.h"

lion::lion(QObject *parent) : Feline(parent)
{

}

void lion::speak()
{
   qInfo() << "ROAR...";

   Feline::speak(); //if u want to call the ftn of base class
                    //meow
}
