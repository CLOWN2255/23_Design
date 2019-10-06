#include "subjecta.h"

SubjectA::SubjectA()
{

}
void SubjectA::Push(const string &st)
{
    v.push_back(st);
}
int SubjectA::Count()
{
    return v.size();
}
string  SubjectA::Pop(const int index)
{
    string st;
    if(index<Count())
    {
        st=v[index];
    }
    return st;
}
Iterator *SubjectA::CreateIterator()
{
    it=new IteratorA(this);
    return  it;
}
