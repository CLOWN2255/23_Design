#ifndef MEDIATOR_H
#define MEDIATOR_H
#include"person.h"

class Mediator
{
public:
    Mediator();
    virtual void SendMessage(string )=0;
};

#endif // MEDIATOR_H
