//Write a program to store and print the roll no., name , age and marks of a student using structures.

#include<iostream>
using namespace std;
struct student
{
	int roll;
	char name[10];
	int age;
	int marks;
};
int main()
{
	struct student s;
	
	cout<<"enter data:\n";
	cin>>s.roll>>s.name>>s.age>>s.marks;
	
	cout<<"roll  "<<"name  "<<"age  "<<"marks  "<<endl;
	cout<<s.roll<<"    "<<s.name<<"    "<<s.age<<"    "<<s.marks<<"    "<<endl;
}
