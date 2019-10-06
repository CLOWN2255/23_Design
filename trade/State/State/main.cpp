#include"state1.h"
#include"state2.h"
#include"context.h"
int main()
{
     State *st1=new State1;
     State *st2=new State2;
     Context con;
     con.setState(st1);
     con.getState();
     con.setState(st2);
     con.getState();
    return 0;
}
