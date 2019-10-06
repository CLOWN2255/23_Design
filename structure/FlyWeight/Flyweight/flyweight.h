#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <iostream>
using namespace std;
class Flyweight
{
public:
    Flyweight();
    virtual void operation()=0;
};

#endif // FLYWEIGHT_H
