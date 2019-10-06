#ifndef CONTEXT_H
#define CONTEXT_H
#include"state.h"

class Context
{
public:
    Context();
    void setState(State *);
    void getState();
private:
    State *st;
};

#endif // CONTEXT_H
