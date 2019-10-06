#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
#include "iterator.h"
using namespace std;


class Subject
{
public:
    Subject();
    virtual int Count()=0;
    virtual void Push(const string &)=0;
    virtual string Pop(const int)=0;
    virtual Iterator*CreateIterator()=0;
};

#endif // SUBJECT_H
