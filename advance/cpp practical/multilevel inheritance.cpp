//28. Write a C++ program to demonstrate multilevel inheritance. 

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
class child : public parent
{
	public:
		void gun()
		{
			cout<<"i am child gun\n";
		}
};
class grand : public child
{
	public:
		void run()
		{
			cout<<"i am grand run \n";
		}
};
int main()
{
	grand g;
	g.fun();
	g.gun();
	g.run();
}
