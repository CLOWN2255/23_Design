#include "mother.h"

Mother::Mother()
{

}
bool Mother::Request(int num)
{
    if(num<=200)
    {
        cout<<"妈给你买!"<<endl;
        return true;
    }
    cout<<"妈不够！"<<endl;
    return false;
}
