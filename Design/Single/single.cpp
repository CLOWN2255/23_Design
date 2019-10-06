#include<iostream>
using namespace std;
class single
{
	private:
		single(){cout<<"hello single!"<<endl;}
	public:
	        static single & Getinstance();
                single & operator=(const single)=delete;
	        single( single&)=delete;
	private:
};
single & single::Getinstance()
{
        static single get;
	return get;
}
int main(void)
{
      	single &si=single::Getinstance();
        single &si2=single::Getinstance();
	if(&si==&si2)
	{
		cout<<"hello"<<endl;
	}
	return 0;
}
