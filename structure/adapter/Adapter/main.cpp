#include"adapter.h"
int main()
{
   Target *a=new Adapter;
   a->Request();
    return 0;
}
