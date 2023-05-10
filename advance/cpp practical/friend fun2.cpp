//25. Write a C++ program to demonstrate the usage of friend function in a class. 

#include<iostream>
using namespace std;
class add
{
	int a,b;
   
    public :
    	void setdata();
    	friend void fun(add);
};
void add::setdata()  //due to method or function outside the class
{
	cout<<"enter two num:\n";
	cin>>a>>b;
}
void fun(add m)
{
	if(m.a>m.b)
	{
		cout<<" max = "<<m.a;
	}
	else
	{
	    cout<<" max = "<<m.b;	
	}
}
int main()
{
	add p;
	p.setdata();
	fun(p);
}
