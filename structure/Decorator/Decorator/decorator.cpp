#include "decorator.h"

Decorator::Decorator(Component *a,int b)
{
   com=a;
   this->a=b;
}
/*void Decorator::CreateComponent(Component *a)
{
    com=a;
}*/
void Decorator::operation()
{
    com->operation();
    cout<<"num="<<a<<endl;
}
