#ifndef STRATEGY_H
#define STRATEGY_H
#include <iostream>

using namespace std;

class Strategy
{
public:
    Strategy();
    virtual void operation()=0;
};

#endif // STRATEGY_H
