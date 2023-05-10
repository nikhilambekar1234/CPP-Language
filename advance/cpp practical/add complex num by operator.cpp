//32. Write a C++ program to overload + operator to add two complex numbers. 
#include<iostream>
using namespace std;
class demo
{
	float real;
	float img;
	public:
		void setdata(float m,float n)
		{
			real=m;
			img=n;
		}
		void getdata()
		{
			if(img>=0)
			{
				cout<<real<<"+"<<img<<"i"<<endl;
			}
			else
			{
			    cout<<real<<img<<"i"<<endl;	
			}
			
		}
		//operator operand operator
		demo operator+(demo d)
		{
		/*  demo temp;
			temp.a=this->a+d.a;
			temp.b=this->b+d.b;
			return temp;*/
			
			demo d3;
			d3.real=this->real+d.real;
			d3.img=this->img+d.img;
			return d3;
			
			
		}
};
int main()
{
	demo d1,d2,d3;
	d1.setdata(8,-5);
	d2.setdata(2,3);
	
	d1.getdata();
	d2.getdata();
	
	
	d3=d1 + d2; //call to demo operator constructor
	d3.getdata();
}
