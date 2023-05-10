//store and display information
//this pointer & overload
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public :
	int id;
	string name;
	float marks;
	
	student()
	{
		id=0;
		name="NULL";
		marks=0.0;
	}
	student(int id,string name,float marks)
	{
		this -> id=id;
		this -> name=name;
		this -> marks=marks;
	}
	void getdata()
	{
		cout<<"id ="<<id<<"  name ="<<name<<"  marks ="<<marks<<endl;
	} 
};
int main()
{
	student s1;
//	student s1=student();
//	student s2(5,"kdn",90.8);
	student s2=student(5,"kdn",90.8);
//	student s2;
//	student(5,"kdn",90.8);
	
     s1.getdata();
     s2.getdata();
}
