#ifndef SUBJECTA_H
#define SUBJECTA_H
#include"subject.h"
#include "iterator.h"
#include"iteratora.h"
#include<vector>
class SubjectA:public Subject
{
public:
    SubjectA();
    int Count();
    void Push(const string &);
    string Pop(const int);
    Iterator*CreateIterator();
    ~SubjectA();
private:
    Iterator *it;
    vector<string> v;
};

#endif // SUBJECTA_H
