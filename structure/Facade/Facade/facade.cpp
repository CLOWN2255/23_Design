#include "facade.h"

Facade::Facade()
{

}
void Facade::operationA()
{
    one.operation1();
    two.operation2();
}
void Facade::operationB()
{
    three.operation3();
    four.operation4();
}
