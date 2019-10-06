#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;
class ProductA
{
public:
    ProductA();
    virtual void operation()=0;
};
class ProductA1:public ProductA
{
public:
    void operation();
};
class ProductA2:public ProductA
{
public:
    void operation();
};

class ProductB
{
public:
    virtual void operation()=0;
};
class ProductB1:public ProductB
{
public:
    void operation();
};
class ProductB2:public ProductB
{
public:
    void operation();
};

#endif // PRODUCT_H
