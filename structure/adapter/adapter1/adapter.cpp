#include "adapter.h"
adapter::adapter():ad(new adaptee )
{

}

void adapter::Request()
{
    ad->SpecificRequest();
}
