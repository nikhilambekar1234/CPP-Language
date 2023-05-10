/*2.Create a class named 'Member' having the following members:
Data members
1 - Name
2 - Age
3 - Phone number
4 - Address
It also has a function named 'printSalary' which prints the salary of the members.Two classes 'Employee' and 
'Manager' inherits the 'Member' class. The 'Employee' and 'Manager' classes have data members 'specialization' 
and 'department' respectively. Now, assign name, age, phone number,address and salary to an employee and a 
manager by making an object of both of these classes and print the same.*/

#include<iostream>
using namespace std;
class Member
{	
    public:
	string name;
	int age;
	int ph;
	int salary;
	string address;
	
        void printSalary()
		{
			cout<<salary<<endl;
		}
};
class Employee:public Member
{
	public:
	string specialization;		
};
class Manager:public Member
{
	public:
    string department;
};
int main()
{
	Employee e;
	e.name="xyz";
	e.age=30;
	e.ph=985785625;
	e.address="pune";
	e.salary=500000;
	e.specialization="cad";
	
	Manager m;
	m.name="abc";
	m.age=32;
	m.ph=7568785625;
	m.address="goa";
	m.salary=600000;
	m.department="mech";
	
    e.printSalary();
	m.printSalary();
}
