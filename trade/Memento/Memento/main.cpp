#include"memento.h"

int main()
{
    Subject *su=new Subject;
    Memento *mem=new Memento;
    su->SetA(12);
    mem->Add(1,*su);
    su->SetA(13);
    mem->Add(2,*su);
    mem->Get(1);
    mem->Get(2);
    return 0;
}
