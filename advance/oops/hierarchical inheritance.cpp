//hierarchical Inheritance

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
class child1 :public parent
{
	public:
		void gun()
		{
			cout<<"i am child gun\n"<<endl;
		}
		
};
class child2 :public parent
{
	public:
		void run()
		{
			cout<<"i am grand run\n"<<endl;
		}
		
};
int main()
{   
    child1 h;
    h.fun();
    h.gun();
    
    
    child2 m;
    m.fun();
    m.run();
    
    
}

