#ifndef MUTTON_H
#define MUTTON_H
#include"command.h"

class Mutton:public Command
{
public:
    Mutton();
    void executeCmd();
};

#endif // MUTTON_H
