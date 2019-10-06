#ifndef BUY_H
#define BUY_H
#include"brother.h"
#include"mother.h"
#include"father.h"
#include<vector>
class Buy
{
public:
    Buy();
    void Buysomethings(int);
private:
    vector<Relatives*> v;
};

#endif // BUY_H
