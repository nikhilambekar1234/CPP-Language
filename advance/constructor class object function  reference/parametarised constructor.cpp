//parametarised constructor
#include<iostream>
using namespace std;
class demo
{
	public :
		
	int id;
	string name;
	string cl;
	
	void setdata(int i,string n, string c)
	{
		id=i;
		name=n;
		cl=c;
	}
	
	void getdata()
	{
		cout<<"  id  = "<<id<<"  name  = "<<name<<"  cl  = "<<cl;
	}
	
	
};
int main()
{
	demo s;
	
	s.setdata(1 ,"nik","kdn" );
	s.getdata();
}
