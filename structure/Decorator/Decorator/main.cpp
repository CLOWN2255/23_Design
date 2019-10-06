

#include"createdecorator.h"

int main()
{
    Component * com=new CreateComponent;
    CreateDecorator *dec=new CreateDecorator(com,1);
   // dec->CreateComponent(com);
    dec->operation();
    dec->AddBehavior();
    cout << "Hello World!" << endl;
    return 0;
}
