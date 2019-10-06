#ifndef NONTERMINALEXPRESSION_H
#define NONTERMINALEXPRESSION_H
#include"termianlexpression.h"
#include<stack>
class nonTerminalExpression :public Expression
{
public:
    nonTerminalExpression();
    void Terminal(Context*);
    void Add(Expression*);
    void Print(Context*);
private:
    stack<Expression*> exp;

};

#endif // NONTERMINALEXPRESSION_H
