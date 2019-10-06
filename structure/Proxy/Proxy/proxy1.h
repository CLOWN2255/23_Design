#ifndef PROXY1_H
#define PROXY1_H
#include "player.h"

class Proxy1
{
public:
    Proxy1(Play *);
    void play1();
    void play2();
    void play3();
private:
    Play *p;
};

#endif // PROXY1_H
