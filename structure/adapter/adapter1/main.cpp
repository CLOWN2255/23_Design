#include"adapter.h"

int main()
{
    adaptee ab;
    target *tar=new adapter;
    tar->Request();
    cout << "Hello World!" << endl;
    return 0;
}
