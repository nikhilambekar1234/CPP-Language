//OVERRIDING-late binding with vitual
#include<iostream>
using namespace std;
class demo
{
	public:
	virtual	void fun()
		{
			cout<<"demo fun"<<endl;
		}
};
class memo:public demo
{
	public:
		void fun()
		{
			cout<<"memo fun"<<endl;
		}
};
int main()
{
	demo *d;
	memo m;
	d=&m;
	d->fun();
}
