#include "context.h"

int main()
{
    Strategy *a=new StrategyA;
    Strategy *b=new StrategyB;

    Context c;
    c.setStrategy(a);
    c.DoAction();
    c.setStrategy(b);
    c.DoAction();
    cout << "Hello World!" << endl;
    return 0;
}
