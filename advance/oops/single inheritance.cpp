//single Inheritance

#include<iostream>
using namespace std;
class parent
{
	public:
		void fun()
		{
			cout<<"i am parent fun\n"<<endl;
		}
		
};
class child :public parent
{
	public:
		void gun()
		{
			cout<<"i am child gun\n"<<endl;
		}
		
};
int main()
{
	parent p;
	p.fun();


    child c;
    c.fun();
    c.gun();
}

