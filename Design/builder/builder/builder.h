#ifndef BUILDER_H
#define BUILDER_H
#include"abstractbuilder.h"

class Builder :public AbstractBuilder
{
public:
    Builder();
     void BuildPartA(int);
     void BuildPartB(int);
     void BuildPartC(int);
     void CreateProduct();
     Product* GetProduct();
private:
      Product *p;
};

#endif // BUILDER_H
