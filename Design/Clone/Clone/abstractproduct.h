#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H
#include<iostream>
using namespace std;
class AbstractProduct
{
public:
    AbstractProduct();
    virtual AbstractProduct *Clone()=0;
};

#endif // ABSTRACTPRODUCT_H
