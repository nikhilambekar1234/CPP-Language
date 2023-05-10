//destructor
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
	~demo()
	{
		cout<<"am in destructor"<<endl;
		delete p;
	}
};
int main()
{
	demo d1;
		
	d1.setdata(2,3,4);//call by method
	
	demo d2(d1);  //cal by constructor
	
	d1.getdata();
	d2.getdata();
	
	*(d1.p)=9;
	
	d1.getdata();
	d2.getdata();
	
	
}
