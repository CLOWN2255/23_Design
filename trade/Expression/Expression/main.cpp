#include"nonterminalexpression.h"

int main()
{
    Context *con=new Context;
    nonTerminalExpression *exp=new nonTerminalExpression;
    Expression *exp1=new TerminalExpression;
    Expression *exp2=new TerminalExpression;
    exp->Add(exp1);
    exp->Add(exp2);
    nonTerminalExpression *exp3=new nonTerminalExpression;
    exp3->Add(exp);
    nonTerminalExpression *exp4=new nonTerminalExpression;
    exp4->Add(exp3);
    exp4->Print(con);
    return 0;
}
