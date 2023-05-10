#include<iostream>
using namespace std;
class A
{
	public :
		void fun()
		{
			cout<<"I am principle\n";
		}
};
class B
{
	public :
		void run()
		{
			cout<<"I am HOD-B\n";
		}
};
class C:public A
{
	public :
		void gun()
		{
			cout<<"I am HOD-C\n";
		}
};
class D:public B,public C
{
	public :
		void sun()
		{
			cout<<"I am Assistant\n";
		}
};
int main()
{
	D d;
	d.A::fun();
	d.run();
	d.gun();
	d.sun();
}
