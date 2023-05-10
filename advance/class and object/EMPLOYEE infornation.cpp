/*11. Write a program that would print the information(name,year of joining,salary,address)of three employees
 by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat */

#include<iostream>
using namespace std;
class Employee
{
	public :
	string name;
	int yoj;
	int salary;
    string address;
	
	
		void setdata(string a,int b,int c,string d)
		{
			name=a;
			yoj=b;
			salary=c;
			address=d;
		}
		
		void getdata()
		{
			cout<<name<<"  "<<yoj<<"  "<<salary<<"  "<<address<<endl;
		}
};
int main()
{
	Employee e1,e2,e3;
	e1.setdata("Robert",1994,500000,"64C- WallsStreat");
	e2.setdata("Sam",2000,700000,"68D- WallsStreat");
	e3.setdata("John",1999,900000,"26B- WallsStreat");
	cout<<"name    yoj      salary       address\n";
	e1.getdata();
	e2.getdata();
	e3.getdata();
	
}

