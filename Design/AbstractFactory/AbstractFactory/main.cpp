#include "factory.h"
int main()
{
    Factory *f1=new Factory1;
    Factory *f2=new Factory2;
    ProductA *a=f1->createProductA();
    ProductB *b=f1->createProductB();
    a->operation();
    b->operation();

    a=f2->createProductA();
    b=f2->createProductB();
    a->operation();
    b->operation();
    return 0;
}
