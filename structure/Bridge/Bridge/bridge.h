#ifndef BRIDGE_H
#define BRIDGE_H
#include <iostream>

using namespace std;


class Bridge
{
public:
    Bridge();
    virtual void operation()=0;
};

#endif // BRIDGE_H
