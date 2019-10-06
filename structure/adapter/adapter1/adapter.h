#ifndef ADAPTER_H
#define ADAPTER_H

#include"target.h"
class adapter :public target
{
public:
    //adapter(ad);
    adapter();
    void Request();

private:
    adaptee *ad;
};

#endif // ADAPTER_H
