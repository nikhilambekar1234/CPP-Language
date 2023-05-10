#include<iostream>
using namespace std;
class demo
{
	int a;
	int b;
	public:
		demo(int m,int n)
		{
			a=m;
			b=n;
		}
		void getdata()
		{
			cout<<" a = "<<a<<" b = "<<b<<endl;
		}
		demo add(demo &d)
		{
			demo temp(0,0);
			temp.a=this->a+d.a;
			temp.b=this->b+d.b;
			return temp;
			
		//	demo d3(0,0);
		//	d3.a=this->a+d.a;
		//	d3.b=this->b+d.b;
		//	return d3;
		}
};
int main()
{
	demo d1(2,3); 
	demo d2(12,14);
	
	d1.getdata();
	d2.getdata();
	
	demo d3(0,0);
	d3=d1.add(d2);
	d3.getdata();
}
