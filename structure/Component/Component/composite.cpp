#include "composite.h"

Composite::Composite()
{

}
void Composite::AddCom(Component *c)
{
    com.push_back(c);
}
void Composite::operation()
{
    vector<Component*>::iterator it=com.begin();
    while (it!=com.end())
    {
       (*it)->operation();
       it++;
    }
}
