#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>

using namespace std;


class Iterator
{
public:
    Iterator();
    virtual string Frist()=0;
    virtual bool End()=0;
    virtual string Next()=0;
    virtual string GetCur()=0;
};

#endif // ITERATOR_H
