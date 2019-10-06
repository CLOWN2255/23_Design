#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H
#include"subject.h"

class ConcreteSubject:public Subject
{
public:
    ConcreteSubject(Observer *);
    void update();

};

#endif // CONCRETESUBJECT_H
