//23. Write a C++ program to demonstrate simple inheritance. 

#include<iostream>
using namespace std;
class parent
{
	public:
	void fun()
	{
		cout<<"i am parent fun\n";
	}
};
class child:public parent
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
	c.fun();
	c.gun();
	
}
