//copy constructor
//parametrise constructor
#include<iostream>
using namespace std;
class demo
{
	public :
	int a,b;
	
	demo(int x,int y)  //parametrise constructor
	{
		a=x;
		b=y;
	}
	
	demo(demo &d)   //copy constructor
	{
		this -> a=d.a;
		this -> b=d.b;
		
	}
	
	void getdata()
	{
		cout<<"   a = "<<a<<"  b = "<<b<<endl;
	}
};
int main()
{
	demo d1(2,3); //calling the parametrise constructor
	demo d2(d1);  //calling the copy constructor
//	demo d2=d1    //calling the copy constructor
	d2.getdata();
	d1.getdata();
}
