//deep copy-constructor
#include<iostream>
using namespace std;
class demo
{
	public :
	int a,b;
	int *p;
	
	demo()
	{
		p=new int;
	}
	
	void setdata(int x,int y,int z)
	{
		a=x;
		b=y;
		*p=z;
	}
	
	demo(demo &d)
	{
		a=d.a;
		b=d.b;
		p=new int;
		*p=*(d.p);
	}
	void getdata()
	{
		cout<<"   a = "<<a<<"  b = "<<b<<"  *p = "<<*p<<endl;
	}
};
int main()
{
	demo d1;
		
	d1.setdata(2,3,4);//CALL by function
	
	demo d2(d1);//call by constructorn
	
	d1.getdata();
	d2.getdata();
	
	*(d1.p)=9;
	
	d1.getdata();
	d2.getdata();
/* 	*(d2.p)=9;
	
	d1.getdata();
	d2.getdata(); */
	
}
