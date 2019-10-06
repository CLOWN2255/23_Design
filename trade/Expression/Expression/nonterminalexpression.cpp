#include "nonterminalexpression.h"

nonTerminalExpression::nonTerminalExpression()
{

}
void nonTerminalExpression::Add(Expression *e)
{
    exp.push(e);
}
void nonTerminalExpression::Terminal(Context *c)
{
    cout<<"没到终点!"<<endl;
    Print(c);
}
void nonTerminalExpression::Print(Context *c)
{
    while (!exp.empty())
    {
        Expression *p=exp.top();
        p->Terminal(c);
        exp.pop();
    }
}

