#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;
class Product
{
public:
    Product();
    void setA(int);
    void setB(int);
    void setC(int);
    void Show();
private:
    int A;
    int B;
    int C;
};

#endif // PRODUCT_H
