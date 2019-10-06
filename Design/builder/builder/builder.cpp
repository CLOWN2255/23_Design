#include "builder.h"

Builder::Builder()
{

}
void Builder::CreateProduct()
{
    p=new Product;
}
void Builder::BuildPartA(int a)
{
    p->setA(a);
}
void Builder::BuildPartB(int a)
{
    p->setB(a);
}
void Builder::BuildPartC(int a)
{
    p->setC(a);
}
Product* Builder::GetProduct()
{
    return p;
}
