#include "concreteobserver.h"
#include "concretesubject.h"
int main()
{
    Observer *ob=new ConcreteObserver;
    Subject *su=new ConcreteSubject(ob);
    su->setA( 4);
    su->update();
    ob->getA();
    su->setA(5);
    su->update();
    ob->getA();
    return 0;
}
