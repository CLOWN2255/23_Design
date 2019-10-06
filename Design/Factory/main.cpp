#include"Factory.h"
int main(void)
{
	AbstractFactory *f=new FactoryA;
	AbstractProduct *p=f->createProduct();
	p->operation();
	
	f=new FactoryB;
	p=f->createProduct();
	p->operation();
	return 0;
}

