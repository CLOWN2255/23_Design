#ifndef ADAPTER_H
#define ADAPTER_H

#include"adaptee.h"
#include"target.h"
class Adapter:public Target,private Adaptee
{
public:
    Adapter();
public:
    void Request();
};

#endif // ADAPTER_H
