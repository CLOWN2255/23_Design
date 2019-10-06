#include "proxy2.h"

Proxy2::Proxy2(Play *p)
{
   this->p=p;
}
void Proxy2::play1()
{
    p->play1();
}
void Proxy2::play2()
{
    p->play2();
}
void Proxy2::play3()
{
    cout<<"无权限"<<endl;
}
