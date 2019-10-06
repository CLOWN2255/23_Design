#include "product.h"

Product::Product()
{
      cout<<"clone!"<<endl;
}
Product::Product(Product* p)
{
     cout<<"clone1!"<<endl;
    *this=*p;
}
AbstractProduct *Product::Clone()
{
    Product *p=new Product(this);
    return p;
}
