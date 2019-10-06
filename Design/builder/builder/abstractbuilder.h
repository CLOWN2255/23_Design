#ifndef ABSTRACTBUILDER_H
#define ABSTRACTBUILDER_H
#include "product.h"

class AbstractBuilder
{
public:
    AbstractBuilder();
    virtual void BuildPartA(int)=0;
    virtual void BuildPartB(int)=0;
    virtual void BuildPartC(int)=0;
    virtual void CreateProduct()=0;
    virtual Product* GetProduct()=0;
};
#endif // ABSTRACTBUILDER_H
