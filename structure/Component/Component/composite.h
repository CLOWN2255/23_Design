#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "component.h"

class Composite:public Component
{
public:
    Composite();
    void operation();
    void AddCom(Component*);
private:
    vector<Component*> com;
};

#endif // COMPOSITE_H
