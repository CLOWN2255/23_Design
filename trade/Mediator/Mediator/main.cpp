#include"mediatorab.h"
#include"persona.h"
#include"personb.h"
int main()
{
    MediatorAB *med=new MediatorAB;
    PersonA *pera=new PersonA(med);
    PersonB *perb=new PersonB(med);
    med->SetPerson(perb);
    pera->SendMessage("你好啊B！");
    perb->GetMessage();

    med->SetPerson(pera);
    perb->SendMessage("你好啊A！");
    pera->GetMessage();
    return 0;
}
