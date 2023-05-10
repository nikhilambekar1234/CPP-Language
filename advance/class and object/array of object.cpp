//15. Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects

#include<iostream>
using namespace std;
class employees
{
	public:
		
	string name;
	int salary;
	int date;
	
	void setdata()
	{
		cout<<"enter name salary date\n";
		cin>>name>>salary>>date;
	}
	void getdata()
	{
		cout<<name<<"  "<<salary<<"  "<<date<<endl;
	}
};
int main()
{
	int i;
	employees e[3];
	for(i=0;i<3;i++)
	{
		e[i].setdata();
	}
	for(i=0;i<3;i++)
	{
		e[i].getdata();
	}
}
