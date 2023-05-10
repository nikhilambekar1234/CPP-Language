//17. Write a program to calculate the average height of all the students of a class.
// The number of students and their heights are entered by the user.

#include<iostream>
using namespace std;
class student
{
	int total,sum;
	public:
		void setdata(int n, int m)
		{
			total=n;
			sum=m;
		}
		void getdata()
		{
			float avg;
			avg=(float)sum/total;
			cout<<"avg height= "<<avg;
		}
};
int main()
{
	int i,n,sum=0,h=0;
	student s;
	cout<<"enter number of student\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cout<<"enter height\n";
	    cin>>h;
	    sum+=h;
	}
	s.setdata(n,sum);
	s.getdata();
}
