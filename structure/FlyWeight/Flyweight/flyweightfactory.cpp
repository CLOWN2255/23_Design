#include "flyweightfactory.h"

FlyweightFactory::FlyweightFactory()
{
   we=new Flyweight1;
}
Flyweight1 * FlyweightFactory::getWeight()
{
    return we;
}
