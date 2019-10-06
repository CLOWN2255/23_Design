#ifndef DECORATOR_H
#define DECORATOR_H
#include"createcomponent.h"

class Decorator :public Component
{
public:
    Decorator(Component *,int );
    void operation();
  //  void CreateComponent(Component *);
private:
    Component *com;
    int a;
};

#endif // DECORATOR_H
