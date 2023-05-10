//2. Write a C++ program to add two numbers using class . 

#include<iostream>
using namespace std;
class add
{
	int a,b;
	
	public :
		//add(){} by class
		void setdata()
		{
			cout<<"enter two num:\n";
			cin>>a>>b;
		}
		void getdata()
		{
			cout<<" sum = "<<a+b;
		}
};
int main()
{
	add s;
	s.setdata();
	s.getdata();
}
