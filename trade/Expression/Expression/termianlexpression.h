#ifndef TERMIANLEXPRESSION_H
#define TERMIANLEXPRESSION_H
#include "expression.h"

class TerminalExpression :public Expression
{
public:
    TerminalExpression();
    void Terminal(Context*);
};

#endif // TERMIANLEXPRESSION_H
