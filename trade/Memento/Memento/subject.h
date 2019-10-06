#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>

using namespace std;

class Subject
{
public:
    Subject();
    void SetA(int);
    void GetA();
private:
    int number;
};

#endif // SUBJECT_H
