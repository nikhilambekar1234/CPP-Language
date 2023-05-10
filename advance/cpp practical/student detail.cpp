//7. Write a C++ program to accept and display the details of a student using class. 

#include<iostream>
using namespace std;
class student
{
	int roll;
	string name;
	float marks;
	
	public :
		void setdata()
		{
			cout<<"enter roll name and marks:\n";
			cin>>roll>>name>>marks;
		}
		void getdata()
		{
			cout<<" roll = "<<roll<<" name = "<<name<<"  marks = "<<marks<<endl;
		}
};
int main()
{
	student s1,s2;
	s1.setdata();
	s2.setdata();
	s1.getdata();
	s2.getdata();
}
