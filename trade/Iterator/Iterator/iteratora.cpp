#include "iteratora.h"

IteratorA::IteratorA(Subject *s):current(0)
{
          su=s;
}
bool IteratorA::End()
{
    return ( (current<=su->Count())? true:false);
}
IteratorA::~ IteratorA()
{
    if(su!=NULL)
        delete  su;
}
string IteratorA::Next()
{
    string str;
    current++;
    if(current<su->Count())
    {
        str=su->Pop(current);
    }
    return  str;
}
string IteratorA::Frist()
{
    return su->Pop(0);
}
string IteratorA::GetCur()
{
    return su->Pop(current);
}
