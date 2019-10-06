#ifndef SUBJECT_H
#define SUBJECT_H

#include"observer.h"
class Subject
{
public:
    Subject(Observer *);
    virtual void update( )=0;
    void setA(int );
    Observer *ob;
//private:
    int a;
};

#endif // SUBJECT_H
