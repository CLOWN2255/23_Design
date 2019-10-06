#include"waiter.h"
#include"mutton.h"
#include"chiken.h"
int main()
{
    Command *mut=new Mutton();
    Command *chi=new Chiken();
    Waiter wa;
    wa.Add(mut);
    wa.Add(chi);
    wa.submitCmd();
    return 0;
}
