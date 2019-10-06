#include "director.h"

Director::Director(AbstractBuilder *a)
{
     abs=a;
}
void Director::Contruct()
{
    if(!abs)
        return;
    abs->CreateProduct();
    abs->BuildPartA(1);
    abs->BuildPartB(2);
    abs->BuildPartC(3);
}
