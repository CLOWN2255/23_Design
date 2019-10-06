#ifndef COMMAND_H
#define COMMAND_H
#include"master.h"

class Command
{
public:
    Command();
    virtual void executeCmd()=0;
//private:
   Master *mas;
};

#endif // COMMAND_H
