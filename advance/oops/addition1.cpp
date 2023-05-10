#include<iostream>
using namespace std;
class demo
{
	int a;
	int b;
	public:
		void setdata(int m,int n)
		{
			a=m;
			b=n;
		}
		void getdata()
		{
			cout<<" a = "<<a<<" b = "<<b<<endl;
		}
		//operator operand operator
		demo operator+(demo d)
		{
		/*  demo temp;
			temp.a=this->a+d.a;
			temp.b=this->b+d.b;
			return temp;*/
			
			demo d3;
			d3.a=this->a+d.a;
			d3.b=this->b+d.b;
			return d3;
			
			
		}
};
int main()
{
	demo d1,d2,d3;
	d1.setdata(2,3);
	d2.setdata(4,5);
	
	d1.getdata();
	d2.getdata();
	
	
	d3=d1 + d2; //call to demo operator constructor
	d3.getdata();
}
