#include"director.h"

int main()
{
    AbstractBuilder * build=new Builder;
    Director *dir=new Director(build);
    dir->Contruct();

    Product *p=build->GetProduct();
    p->Show();
    return 0;
}
