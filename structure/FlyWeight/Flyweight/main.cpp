#include "flyweightfactory.h"
#include"flyweight2.h"
int main()
{
    FlyweightFactory *fl=new FlyweightFactory;
    Flyweight * we=fl->getWeight();
    we->operation();
    we=new Flyweight2;
    we->operation();
    return 0;
}
