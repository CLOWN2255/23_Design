#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
#include <vector>
using namespace std;


class Component
{
public:
    Component();
    virtual void operation()=0;
};

#endif // COMPONENT_H
