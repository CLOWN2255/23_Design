#include "concretesubject.h"

ConcreteSubject::ConcreteSubject(Observer *ob):Subject (ob)
{

}
void ConcreteSubject::update()
{
    ob->setA(a);
}
