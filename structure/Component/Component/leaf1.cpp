#include "leaf1.h"

Leaf1::Leaf1()
{

}
void Leaf1::AddLeaf(Leaf1 * l)
{
    leaf.push_back(l);
}
void Leaf1::operation()
{
    cout<<"leaf1"<<endl;
    vector<Leaf1*>::iterator it=leaf.begin();
    while (it!=leaf.end())
    {
        (*it)->operation();
        it++;
    }
}
