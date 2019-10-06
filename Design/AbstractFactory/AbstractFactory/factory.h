#ifndef FACTORY_H
#define FACTORY_H
#include"product.h"

class Factory
{
public:
    virtual ProductA *createProductA()=0;
    virtual ProductB *createProductB()=0;
};
class Factory1:public Factory
{
public:
    ProductA *createProductA();
    ProductB *createProductB();
};
class Factory2:public Factory
{
public:
    ProductA *createProductA();
    ProductB *createProductB();
};
#endif // FACTORY_H
