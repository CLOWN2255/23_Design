#ifndef WAITER_H
#define WAITER_H
#include"command.h"
#include<vector>
class Waiter
{
public:
    Waiter();
    void Add(Command *p);
    void submitCmd();
private:
    vector<Command*> com;
};

#endif // WAITER_H
