#ifndef CHIKEN_H
#define CHIKEN_H
#include"command.h"

class Chiken:public Command
{
public:
    Chiken();
    void executeCmd();
};

#endif // CHIKEN_H
