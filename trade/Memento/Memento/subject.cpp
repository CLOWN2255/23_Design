#include "subject.h"

Subject::Subject():number(0)
{

}
void Subject::SetA(int a)
{
    number=a;
}
void Subject::GetA()
{
    cout<<"A="<<number<<endl;
}
