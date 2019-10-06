#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

using namespace std;

class Observer
{
public:
    Observer();
    void setA(int);
    void getA();
private:
    int a;
};

#endif // OBSERVER_H
