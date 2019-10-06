#include "subject.h"

Subject::Subject(Observer *b)
{
      ob=b;
}
void Subject::setA(int a)
{
    this->a=a;
}
