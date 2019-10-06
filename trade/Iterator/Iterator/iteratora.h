#ifndef ITERATORA_H
#define ITERATORA_H
#include"iterator.h"
#include"subject.h"
class IteratorA:public Iterator
{
public:
    IteratorA(Subject *);
     string Frist();
     bool End();
     string Next();
     string GetCur();
     ~IteratorA();
private:
     Subject *su;
     int current;
};

#endif // ITERATORA_H
