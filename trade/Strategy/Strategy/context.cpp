#include "context.h"

Context::Context()
{

}
void Context::setStrategy(Strategy *s)
{
    st=s;
}
void Context::DoAction()
{
    st->operation();
}
