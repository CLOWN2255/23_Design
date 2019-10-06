#include "buy.h"

Buy::Buy()
{
   v.push_back(new Brother);
   v.push_back(new Mother);
   v.push_back(new Father);
}
void Buy::Buysomethings(int num)
{
    vector<Relatives*>::iterator it=v.begin();
    while (it!=v.end())
    {
        if((*it)->Request(num))
         break;
        it++;
    }
}
