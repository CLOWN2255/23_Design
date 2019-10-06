#ifndef REFINEABSTRACTION_H
#define REFINEABSTRACTION_H
#include "abstraction.h"

class RefineAbstraction:public Abstraction
{
public:
    RefineAbstraction(Bridge *);
    void operation();
};

#endif // REFINEABSTRACTION_H
