//hybrid Inheritance

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
class child1 
{
	public:
		void gun()
		{
			cout<<"i am child1 gun\n"<<endl;
		}
		
};
class child2 : public parent
{
	public:
		void gun()
		{
			cout<<"i am child2 run\n"<<endl;
		}
		
};
class grand : public child1,public child2
{
	public:
		void dun()
		{
			cout<<"i am grand dun\n"<<endl;
		}
};
int main()
{   
    child1 m;
    
    m.gun();
    
    cout<<"---------------------------------------------------\n";
    
    child2 n;
    n.fun();
    n.gun();
    cout<<"---------------------------------------------------\n"; 
    grand o;
    o.fun();	
    o.dun();
    
    o.child1::gun();
    o.child2::gun();
    
}

