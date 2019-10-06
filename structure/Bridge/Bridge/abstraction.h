#ifndef ABSTRACTION_H
#define ABSTRACTION_H
#include <iostream>
#include "bridge1.h"
#include"bridge2.h"
using namespace std;


class Abstraction
{
public:
    Abstraction();
    virtual void operation()=0;
//private:
    Bridge *br;
};

#endif // ABSTRACTION_H
