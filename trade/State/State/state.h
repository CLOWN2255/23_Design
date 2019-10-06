#ifndef STATE_H
#define STATE_H
#include <iostream>

using namespace std;

class State
{
public:
    State();
    virtual void operation()=0;
};

#endif // STATE_H
