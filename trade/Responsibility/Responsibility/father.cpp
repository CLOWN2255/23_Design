#include "father.h"

Father::Father()
{

}
bool Father::Request(int num)
{
    if(num<=300)
    {
        cout<<"爸给你买!"<<endl;
        return  true;
    }
    cout<<"爸不够!"<<endl;
    return false;
}
