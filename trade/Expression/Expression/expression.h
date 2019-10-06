#ifndef EXPRESSION_H
#define EXPRESSION_H
#include"context.h"
#include <iostream>

using namespace std;
class Expression
{
public:
    Expression();
    virtual void Terminal(Context *)=0;
};

#endif // EXPRESSION_H
