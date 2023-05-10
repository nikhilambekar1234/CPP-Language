//static field- counting
#include<iostream>
using namespace std;
class demo
{
	public :
	int id;
	string name;
   static	string cname; //data member or instance variable
	static int count;
	void setdata(int i,string n)
	{
		id=i;
		name=n;
		count++;
	}
	
	void getdata()
	{
		cout<<"  id  = "<<id<<"  name  = "<<name<<"  cname  = "<<cname<<endl;
	}
	
	
};
string demo ::cname="kdn";
int demo::count=0;
int main()
{
	demo s1,s2,s3;
	
	s1.setdata(1 ,"abc");
	s2.setdata(2 ,"pqr");
	s3.setdata(3 ,"xyz");
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	
	demo ::cname="tcs";
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	
	cout<<"  total student = "<<demo::count<<endl;
	
}
