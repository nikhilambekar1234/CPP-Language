//MULTIPLE Inheritance

#include<iostream>
using namespace std;
class parentA
{
	public:
		void fun()
		{
			cout<<"i am parent fun\n"<<endl;
		}
		
};
class parentB
{
	public:
		void fun()
		{
			cout<<"i am child gun\n"<<endl;
		}
		
};
class child : public parentA,public parentB
{
	public:
		void run()
		{
			cout<<"i am grand run\n"<<endl;
		}
		
};
int main()
{   
    child c;
    
    c.run();
    
    c.parentA::fun();
    c.parentB::fun();
    
}

