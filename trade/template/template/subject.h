#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>

using namespace std;
class Subject
{
public:
    Subject();
    virtual void operation()=0;
    void All();
};

#endif // SUBJECT_H
