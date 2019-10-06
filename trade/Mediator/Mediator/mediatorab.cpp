#include "mediatorab.h"

MediatorAB::MediatorAB()
{

}
void MediatorAB::SendMessage(string st)
{
      per->GetMessage(st);
}
void MediatorAB::SetPerson(Person * p)
{
    per=p;
}
