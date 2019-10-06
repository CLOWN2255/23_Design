#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
public:
    Person();
    virtual void SendMessage(string )=0;
    virtual void GetMessage(string )=0;
};

#endif // PERSON_H
