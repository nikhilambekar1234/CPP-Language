//7. Write a C++ program to accept and display the details of a student using class. 
//8. Write a C++ program to accept and display the details of an employee using a class
#include<iostream>
using namespace std;
class student
{
	int roll;
	string name;
	int id;
	
	public :
		void setdata()
		{
			cout<<"enter roll name and id:\n";
			cin>>roll>>name>>id;
		}
		void getdata()
		{
			cout<<" roll = "<<roll<<" name = "<<name<<"  id = "<<id<<endl;
		}
};
int main()
{
	int i;
	student s[3];
	for(i=0;i<3;i++)
	{
		s[i].setdata();
	}
	for(i=0;i<3;i++)
	{
		s[i].getdata();
	}
	
}
