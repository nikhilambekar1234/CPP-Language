//22. Write a C++ program to demonstrate the usage of a constructor and destructor in a class. 
#include<iostream>
using namespace std;
class student 
{
	
	int roll;
	string name;
	float marks;
	
    public :
		student(int x,string y,float z)
		{
			roll=x;
			name=y;
			marks=z;
		}
		student(student &m)
		{
			roll=m.roll;
			name=m.name;
			marks=m.marks;
		}
		void getdata()
		{
			cout<<" roll = "<<roll<<" name = "<<name<<" marks = "<<marks<<endl;
		}
		~student()
        {
	       cout<<"successsful"<<endl;
	    }
};

int main()
{
	student s1(1,"nik",98.56);
	student s2(s1);
	
	s1.getdata();
	s2.getdata();
}
