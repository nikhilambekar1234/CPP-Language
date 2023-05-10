//friend class

#include<iostream>
using namespace std;
class A
{
	private :
		int x=5;
		int y=7;
		
		friend class B;
};
class B
{
	public :
		//void display(A &a)
		void display(A a)
		{
			cout<<"x = "<<a.y;
		}
};
int main()
{
    A a;
    B b;
    
    b.display(a);
}
