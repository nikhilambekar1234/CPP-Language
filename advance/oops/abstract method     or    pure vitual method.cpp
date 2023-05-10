//abstract method/pure vitual method
#include<iostream>
using namespace std;
class demo
{
	public:
	virtual	void fun()=0;  
		
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
