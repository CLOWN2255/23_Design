#include "memento.h"

Memento::Memento()
{

}
void Memento::Add(int key,Subject su)
{
    sum.insert(make_pair(key,su));
}
void Memento::Get(int key)
{
    sum[key].GetA();
}
