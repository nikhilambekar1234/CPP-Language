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
		demo operator-(demo d)
		{
			demo temp;
			temp.a=this->a-d.a;
			temp.b=this->b-d.b;
			return temp; 
		}
};
int main()
{
	demo d1,d2,d3;
	d1.setdata(12,14);
	d2.setdata(5,6);
	
	d1.getdata();
	d2.getdata();
	
	
    d3=d1 - d2;
	d3.getdata();
}
