#ifndef PERSONB_H
#define PERSONB_H
#include"person.h"
#include"mediator.h"
class PersonB:public Person
{
public:
    PersonB(Mediator *);
    void SendMessage(string);
    void GetMessage(string);
    void GetMessage();
private:
    Mediator *med;
    string str;
};

#endif // PERSONB_H
