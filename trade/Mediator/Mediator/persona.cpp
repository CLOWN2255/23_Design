
#include "persona.h"

PersonA::PersonA(Mediator *m):med(m)
{

}
void PersonA::SendMessage(string st)
{
    med->SendMessage(st);
}
void PersonA::GetMessage(string st)
{
    str=st;
}
void PersonA::GetMessage()
{
    cout<<str<<endl;
}
