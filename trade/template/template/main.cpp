#include "subjecta.h"
#include "subjectb.h"

int main()
{
    Subject *suA=new SubjectA;
    suA->All();
    Subject *suB=new SubjectB;
    suB->All();
    cout << "Hello World!" << endl;
    return 0;
}
