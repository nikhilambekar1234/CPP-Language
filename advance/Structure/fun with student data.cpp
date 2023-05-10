//Write a structure to store the roll no., name, age (between 11 to 14)
// and address of students (more than 10). Store the information of the students.
//1 - Write a function to print the names of all the students having age 14.
//2 - Write another function to print the names of all the students having even roll no.
//3Write another fun to display the details of the student whose roll no. entered by the user.

#include<iostream>
using namespace std;
struct account
{
	int roll;
	char name[10];
	int age;
	char address[20];
};
int fun(struct account s[4])
{
	int i;
	cout<<"age having 14\n";
	cout<<"roll    "<<"name    "<<"age     "<<"address     "<<endl;
	for(i=0;i<4;i++)
	{
		if(s[i].age==14)
		{
			cout<<s[i].roll<<"      "<<s[i].name<<"      "<<s[i].age<<"      "<<s[i].address<<"      "<<endl;
		}
	}
}

int gun(struct account s[4])
{
	int i;
	cout<<"roll no having even\n";
	for(i=0;i<4;i++)
	{
		if(s[i].roll%2==0)
		{
			cout<<s[i].name<<endl;
		}
	}
}
int run(struct account s[4])
{
	int i,n;
	cout<<"enter roll no:\n";
	cin>>n;
	cout<<"roll    "<<"name    "<<"age     "<<"address     "<<endl;
	for(i=0;i<4;i++)
	{
		if(s[i].roll==n)
		{
			cout<<s[i].roll<<"      "<<s[i].name<<"      "<<s[i].age<<"      "<<s[i].address<<"      "<<endl;
		}
		
	}
}
int main()
{
	int i;
	struct account s[4];
	
	cout<<"enter data:\n";
	for(i=0;i<4;i++)
	{
		cin>>s[i].roll>>s[i].name>>s[i].age>>s[i].address;
	}
	cout<<"roll    "<<"name    "<<"age     "<<"address     "<<endl;
	for(i=0;i<4;i++)
	{
		if(s[i].age>11 && s[i].age<14)
		{
			cout<<s[i].roll<<"      "<<s[i].name<<"      "<<s[i].age<<"      "<<s[i].address<<"      "<<endl;
		}
	}
	fun(s);
	gun(s);
	run(s);
}

