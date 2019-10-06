#ifndef MEDIATORAB_H
#define MEDIATORAB_H
#include"mediator.h"

class MediatorAB:public Mediator
{
public:
    MediatorAB();
    void SendMessage(string );
    void SetPerson(Person *);
private:
    Person *per;
};

#endif // MEDIATORAB_H
