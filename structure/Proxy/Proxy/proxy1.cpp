#include "proxy1.h"

Proxy1::Proxy1(Play *p)
{
   this->p=p;
}
void Proxy1::play1()
{
    p->play1();
}
void Proxy1::play2()
{
    cout<<"无权限"<<endl;
}
void Proxy1::play3()
{
    p->play3();
}
