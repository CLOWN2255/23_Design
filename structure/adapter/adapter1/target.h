#ifndef TARGET_H
#define TARGET_H
#include"adaptee.h"

class target
{
public:
    target();
    virtual void Request()=0;
protected:

};

#endif // TARGET_H
