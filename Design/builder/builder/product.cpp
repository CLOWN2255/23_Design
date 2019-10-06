#include "product.h"

Product::Product()
{

}
void Product::setA(int a)
{
    A=a;
}
void Product::setB(int a)
{
    B=a;
}
void Product::setC(int a)
{
    C=a;
}
void Product::Show()
{
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    cout<<"C="<<C<<endl;
}
