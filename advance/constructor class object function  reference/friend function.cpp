//friend function

#include<iostream>
using namespace std;
class demo
{
	private :
		int special=7;
		
	public :
	    friend void fun(demo);	
};
void fun(demo m)
{
	cout<<"demo special value = "<<m.special;
}
int main()
{
	demo d;
	fun(d);
}
