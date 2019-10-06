#include"Factory.h"
AbstractProduct * FactoryA::createProduct()
{
	AbstractProduct *p=new ProductA();
	return p;
}
AbstractProduct *FactoryB::createProduct()
{
	AbstractProduct *p=new ProductB();
	return p;
}
