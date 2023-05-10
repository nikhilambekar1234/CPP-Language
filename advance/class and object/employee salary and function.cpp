/*13. Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3'AddWork()'which adds$5 to the salary of the employee if the number of hours of work per day is more than 6 hou*/

#include<iostream>
using namespace std;
class Employee
{
	int salary;
	int hour;
	
	public:
	//	Employee(){}
		void getInfo()
		{
			cout<<"enter salary:\n";
			cin>>salary;
			cout<<"enter number of hour:\n";
			cin>>hour;
		}
		void AddSal()
		{
			if(salary<500)
			{
				salary+=10;
				cout<<"salary = "<<salary<<endl;
			}
		}
		void AddWork()
		{
			if(hour>6)
			{
				salary+=5;
				cout<<"salary = "<<salary<<endl;
				
			}
		}
};
int main()
{
	int i,n;
	cout<<"enter number of employee:\n";
	cin>>n;
	//Employee emp[n];
	Employee *emp=new Employee[n];

	for(i=1;i<=n;i++)
	{
		cout<<"employee no = "<<i<<endl;
		emp[i].getInfo();
		emp[i].AddSal();
		emp[i].AddWork();
	}
}

