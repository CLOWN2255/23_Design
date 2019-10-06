#include"iteratora.h"
#include"subjecta.h"
int main()
{
    Subject *su=new SubjectA;
    su->Push("clown");
    su->Push("joker");
    su->Push("Good");
    Iterator *it=su->CreateIterator();
    cout<<it->Frist()<<endl;
    while (it->End())
    {
        cout<<it->Next()<<endl;
    }
    return 0;
}
