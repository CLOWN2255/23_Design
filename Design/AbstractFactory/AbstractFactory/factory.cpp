#include "factory.h"


ProductA *Factory1::createProductA()
{
    ProductA * a=new ProductA1;
    return a;
}
ProductB *Factory1::createProductB()
{
    ProductB * a=new ProductB1;
    return a;
}
ProductA *Factory2::createProductA()
{
    ProductA * a=new ProductA2;
    return a;
}
ProductB *Factory2::createProductB()
{
    ProductB * a=new ProductB2;
    return a;
}
