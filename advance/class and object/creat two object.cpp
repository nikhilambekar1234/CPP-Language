//2. Assign and print the roll number, phone number and address of two students having names "Sam" and "John" 
//respectively by creating two objects of the class 'Student'.

#include<iostream>
using namespace std;
class Student
{
	public:
		
	string name,address;
	int roll,mob;
	
	void setdata(int a,int b,string c,string d)
	{
		roll=a;
		mob=b;
		address=c;
		name=d;
	}
	void getdata()
	{
		cout<<" roll = "<<roll<<" mob = "<<mob<<" address = "<<address<<" name = "<<name<<endl;
	}
};
int main()
{
	Student s1,s2;
	
	s1.setdata(1,5236589563,"pune","Sam");
	s2.setdata(2,8652364795,"mumbai","Jam");
	
	s1.getdata();
	s2.getdata();
}
