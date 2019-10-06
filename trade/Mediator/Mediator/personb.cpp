
#include "personb.h"

PersonB::PersonB(Mediator *m):med(m)
{

}

void PersonB::SendMessage(string st)
{
    med->SendMessage(st);
}
void PersonB::GetMessage(string st)
{
    this->str=st;
}
void PersonB::GetMessage()
{
    cout<<str<<endl;
}
