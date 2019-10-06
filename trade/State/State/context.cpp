#include "context.h"

Context::Context()
{

}
void Context::setState(State *s)
{
    st=s;
}
void Context::getState()
{
    st->operation();
}
