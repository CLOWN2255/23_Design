#include"product.h"
class AbstractFactory
{
	public:
		virtual AbstractProduct* createProduct()=0;
};
class FactoryA:public AbstractFactory
{
	public :
		AbstractProduct * createProduct();
};
class FactoryB:public AbstractFactory
{
	public:
		AbstractProduct *createProduct();
};
