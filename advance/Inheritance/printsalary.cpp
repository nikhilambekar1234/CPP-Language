/*2.Create a class named 'Member' having the following members:
Data members
1 - Name
2 - Age
3 - Phone number
4 - Address
It also has a function named 'printSalary' which prints the salary of the members. Two classes 'Employee' and 
'Manager' inherits the 'Member' class. The 'Employee' and 'Manager' classes have data members 'specialization' 
and 'department' respectively. Now, assign name, age, phone number,address and salary to an employee and
 a manager by making an object of both of these classes and print the same.*/
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
	string specialization;
	public:
		Employee(string name,int age,int ph,int salary,string address,string specialization)
		{
			this-> name=name;
			this-> age=age;
			this-> ph=ph;
			this-> salary=salary;
			this-> address=address;
			this-> specialization=specialization;
			
		}
		
};
class Manager:public Member
{
    string department;
	public:
	    Manager(string name,int age,int ph,int salary,string address,string department)
		{
			this-> name=name;
			this-> age=age;
			this-> ph=ph;
			this-> salary=salary;
			this-> address=address;
			this-> department=department;
			
		}
	    	
};
int main()
{
	Employee e=Employee("nik",30,98652586658,800000,"pune","CAD");
	Manager m=Manager("niL",32,88562586658,900000,"GOA","MECH");
	
    e.printSalary();
	m.printSalary();
}
