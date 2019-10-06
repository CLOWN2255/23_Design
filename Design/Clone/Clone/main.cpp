#include"product.h"
int main()
{
    AbstractProduct *p=new Product;
    AbstractProduct *p1=p->Clone();
    return 0;
}
