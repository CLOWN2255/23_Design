#include "createdecorator.h"

CreateDecorator::CreateDecorator(Component * a,int b):Decorator (a,b)
{

}
void CreateDecorator::AddBehavior()
{
    cout<<"hello joker!"<<endl;
}
