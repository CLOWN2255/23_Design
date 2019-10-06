#include<iostream>
using namespace std;
class AbstractProduct
{
	public:
		virtual void  operation()=0;
};
class ProductA:public AbstractProduct
{
	public:
		void operation();
};
class ProductB:public AbstractProduct
{
	public:
		void operation();
};
