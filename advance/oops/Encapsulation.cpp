//ENCAPSULATION
#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void getdata()
		{
			cout<<" a = "<<a<<" b = "<<b;
		}
};
int main()
{
	demo d;
	d.setdata(2,3);
	d.getdata();
}
