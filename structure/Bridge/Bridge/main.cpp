#include "refineabstraction.h"
int main()
{
    Bridge *br1=new Bridge1;
    Bridge *br2=new Bridge2;
    Abstraction *ab=new RefineAbstraction(br1);
    ab->operation();
    ab=new RefineAbstraction(br2);
    ab->operation();
    cout << "Hello World!" << endl;
    return 0;
}
