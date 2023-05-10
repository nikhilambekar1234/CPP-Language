//call by costructor and method
#include<iostream>
using namespace std;
class demo
{
	int a;
	int b;
	public:
		demo()
		{
			
		}
		demo(int m,int n)
		{
			a=m;
			b=n;
		}
		void setdata(int k,int l)
		{
			a=k;
			b=l;
		}
		void getdata()
		{
			cout<<" a = "<<a<<" b = "<<b<<endl;
		}
};
int main()
{
	demo d2(2,3);
	demo d1;
	d1.setdata(12,14);
	
	
	
	d1.getdata();
	d2.getdata();
	
}
