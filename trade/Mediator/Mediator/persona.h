#ifndef PERSONA_H
#define PERSONA_H
#include"person.h"
#include"mediator.h"
class PersonA:public Person
{
public:
    PersonA(Mediator *);
    void SendMessage(string );
    void GetMessage(string );
    void GetMessage();
private:
     Mediator *med;
     string str;
};

#endif // PERSONA_H
