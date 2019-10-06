#ifndef PLAY_H
#define PLAY_H
#include <iostream>

using namespace std;


class Play
{
public:
    Play();
    virtual void play1()=0;
    virtual void play2()=0;
    virtual void play3()=0;
};

#endif // PLAY_H
