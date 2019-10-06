#ifndef FACADE_H
#define FACADE_H
#include"systemone.h"
#include"systemfour.h"
#include"systenthree.h"
#include"systemtwo.h"
class Facade
{
public:
    Facade();
    void operationA();
    void operationB();
private:
    SystemOne one;
    Systemtwo two;
    Systemthree three;
    Systemfour four;
};

#endif // FACADE_H
