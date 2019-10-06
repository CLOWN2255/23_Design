#ifndef MEMENTO_H
#define MEMENTO_H
#include"subject.h"
#include<map>
#include<utility>
class Memento
{
public:
    Memento();
    void Add(int key,Subject);
    void Get(int key);
private:
    map<int,Subject> sum;
};

#endif // MEMENTO_H
