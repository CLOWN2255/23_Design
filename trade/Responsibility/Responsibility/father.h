#ifndef FATHER_H
#define FATHER_H
#include"relatives.h"

class Father:public Relatives
{
public:
    Father();
    bool Request(int);
};

#endif // FATHER_H
