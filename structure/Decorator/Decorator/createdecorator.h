#ifndef CREATEDECORATOR_H
#define CREATEDECORATOR_H
#include"decorator.h"

class CreateDecorator:public Decorator
{
public:
    CreateDecorator(Component *,int);
    void AddBehavior();
};

#endif // CREATEDECORATOR_H
