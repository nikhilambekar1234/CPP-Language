//WAP to store and print the roll no.,name,age,address and marks of 4 students using structure

#include<iostream>
using namespace std;
struct student
{
	int roll;
	char name[10];
	int age;
	char address[20];
	float marks;
};
int main()
{
	int i;
	struct student s[4];
	
	cout<<"enter data:\n";
	for(i=0;i<4;i++)
	{
		cin>>s[i].roll>>s[i].name>>s[i].age>>s[i].address>>s[i].marks;
	}
	cout<<"your data:\n";
	cout<<"roll  "<<"name  "<<"age  "<<"address  "<<"marks  "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<s[i].roll<<"    "<<s[i].name<<"    "<<s[i].age<<"    "<<s[i].address<<"    "<<s[i].marks<<endl;
	}
	
}
