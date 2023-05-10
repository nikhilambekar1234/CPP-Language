//multiplevel Inheritance

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
class grand :public child
{
	public:
		void run()
		{
			cout<<"i am grand run\n"<<endl;
		}
		
};
int main()
{   
    grand g;
    
    g.fun();
    g.gun();
    g.run();
}

