//Write a program to store the roll no. (starting from 1), name and age of 4 students
// and then print the details of the student with roll no.2

#include<iostream>
using namespace std;
struct student
{
	int roll;
	char name[10];
	int age;
};
int main()
{
	int i;
	struct student s[4];
	
	cout<<"enter data:\n";
	for(i=0;i<4;i++)
	{
		cin>>s[i].roll>>s[i].name>>s[i].age;
	}
	cout<<"your data:\n";
	cout<<"roll  "<<"name  "<<"age  "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<s[i].roll<<"    "<<s[i].name<<"    "<<s[i].age<<endl;
	}
	cout<<"your data:\n";
	cout<<"roll  "<<"name  "<<"age  "<<endl;
	for(i=0;i<4;i++)
	{
		if(s[i].roll==2)
		{
			cout<<s[i].roll<<"    "<<s[i].name<<"    "<<s[i].age<<endl;
		}
		
	}
}
