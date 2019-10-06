#ifndef VISITORA_H
#define VISITORA_H
#include"visitor.h"

class VisitorA:public Visitor
{
public:
    VisitorA();
    void visitA();
    void visitB(){};
};

#endif // VISITORA_H
