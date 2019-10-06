#include "brother.h"

Brother::Brother()
{

}
bool Brother::Request(int num)
{
    if(num<=100)
    {
        cout<<"哥给你买!"<<endl;
        return true;
    }
    cout<<"哥不够!"<<endl;
    return  false;
}
