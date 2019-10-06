#ifndef CONTEXT_H
#define CONTEXT_H
#include"strategya.h"
#include"strategyb.h"

class Context
{
public:
    Context();
    void setStrategy(Strategy *);
    void DoAction();
private:
    Strategy *st;
};

#endif // CONTEXT_H
