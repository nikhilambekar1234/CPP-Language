#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		string name;
		static string cname;
		void setdata()
        {
	       cout<<"enter id no and name\n";
	       cin>>id>>name;
        }
        void getdata()
        {
	      cout<<" id = "<<id<<" name = "<<name<<" cname = "<<cname<<endl;
        }
		
		
};
string Student::cname="Amravati";
int main()
{
	int n;
	
	cout<<"enter number of student\n";
	cin>>n;
	Student s[n];
	
	for(int i=0;i<n;i++)
	{
		s[i].setdata();
	}
	for(int i=0;i<n;i++)
	{
		s[i].getdata();
	}
	
}
