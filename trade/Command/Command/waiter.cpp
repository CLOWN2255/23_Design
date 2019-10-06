#include "waiter.h"

Waiter::Waiter()
{

}
void Waiter::Add(Command *p)
{
    com.push_back(p);
}
void Waiter::submitCmd()
{
    vector<Command*>::iterator it=com.begin();
    while (it!=com.end())
    {
        (*it)->executeCmd();
        it++;
    }
}
