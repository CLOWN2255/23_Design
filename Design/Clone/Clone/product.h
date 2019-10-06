#ifndef PRODUCT_H
#define PRODUCT_H
#include"abstractproduct.h"

class Product:public AbstractProduct
{
public:
    Product();
    AbstractProduct *Clone();
private:
    Product(Product*);
};

#endif // PRODUCT_H
