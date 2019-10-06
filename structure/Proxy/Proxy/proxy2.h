#ifndef PROXY2_H
#define PROXY2_H
#include "player.h"

class Proxy2
{
public:
    Proxy2(Play *);
    void play1();
    void play2();
    void play3();
private:
    Play *p;
};

#endif // PROXY2_H
