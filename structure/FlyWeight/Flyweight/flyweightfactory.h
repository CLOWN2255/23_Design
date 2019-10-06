#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H
#include "flyweight1.h"

class FlyweightFactory
{
public:
    FlyweightFactory();
    Flyweight1 *getWeight();
private:
    Flyweight1 * we;
};

#endif // FLYWEIGHTFACTORY_H
