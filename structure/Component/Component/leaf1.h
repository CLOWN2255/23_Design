#ifndef LEAF1_H
#define LEAF1_H

#include"component.h"
class Leaf1:public Component
{
public:
    Leaf1();
    void operation();
    void AddLeaf(Leaf1 *);
private:
    vector<Leaf1*> leaf;
};

#endif // LEAF1_H
