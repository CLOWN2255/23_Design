#include "refineabstraction.h"

RefineAbstraction::RefineAbstraction(Bridge *b)
{
    br=b;
}
void RefineAbstraction::operation()
{
    br->operation();
}
