#include"proxy1.h"
#include"proxy2.h"
int main()
{
    Play *p=new player;
    Proxy1 p1(p);
    Proxy2 p2(p);
    p1.play1();
    p1.play2();
    p1.play3();
    cout<<endl;
    p2.play1();
    p2.play2();
    p2.play3();
    return 0;
}
