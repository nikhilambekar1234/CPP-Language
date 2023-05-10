//OVERRIDING
#include<iostream>
using namespace std;
class demo
{
	public:
		void fun()
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
	memo m;
	m.fun();
}
