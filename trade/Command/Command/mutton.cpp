#include "mutton.h"

Mutton::Mutton()
{
   mas=new Master;
}
void Mutton::executeCmd()
{
    mas->MakeMutton();
}
