//27. Write a C++ program to display employee information using multiple inheritance. 
#include<iostream>
using namespace std;
class parentA
{
	public:
	void fun()
	{
		cout<<"i am parentA fun\n";
	}
};
class parentB
{
	public:
	void fun()
	{
		cout<<"i am parentB fun\n";
	}
};
class child:public parentA,public parentB
{
	public:
	void gun()
	{
		cout<<"i am child gun\n";
	}
};
int main()
{
	child c;
	c.gun();
	c.parentA::fun();
	c.parentB::fun();
}
