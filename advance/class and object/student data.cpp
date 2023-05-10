//16. Write a program to print the roll number and average marks of 8 students in three subjects
// (each out of 100).The marks are entered by the user and the roll numbers are automatically assigned.

#include<iostream>
using namespace std;
class student
{
	int roll,a,b,c;
	public :
		void setdata()
		{
			
			cin>>a>>b>>c;
		}
		void getdata(int r)
		{
		   float avg;
		   roll=r;
		   avg=(float)(a+b+c)/3;
		   cout<<roll<<"  "<<avg<<endl;
		   
		}
};
int main()
{
	int i;
	student s[3];
	for(i=0;i<3;i++)
	{
        cout<<"enter 3 sub marks of student :"<<i+1<<endl;
		s[i].setdata();
	}
	cout<<"roll    avg\n";
	for(i=0;i<3;i++)
	{
		s[i].getdata(i+1);
	}
}
