#include "chiken.h"

Chiken::Chiken()
{
    mas=new Master;
}
void Chiken::executeCmd()
{
    mas->MakeChiken();
}
