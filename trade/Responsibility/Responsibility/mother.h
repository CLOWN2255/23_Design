#ifndef MOTHER_H
#define MOTHER_H

#include "relatives.h"
class Mother :public Relatives
{
public:
    Mother();
    bool Request(int);
};

#endif // MOTHER_H
