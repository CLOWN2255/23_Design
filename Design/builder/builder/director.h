#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "builder.h"

class Director
{
public:
    Director(AbstractBuilder *);
    void Contruct();
private:
    AbstractBuilder *abs;
};

#endif // DIRECTOR_H
