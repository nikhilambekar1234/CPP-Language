//1.Write a program to print the names of students by creating a Student class.
// If no name is passed while creating an object of the Student class, then the name should be "Unknown",
// otherwise the name should be equal to the String value passed while creating the object of the Student class.

#include<iostream>
using namespace std;
class Student
{
    string name;	
	public:
		Student()
		{
			name="Unknown";
		}
		Student(string m)
		{
			name= m;
		}
		void printname()
		{
			cout<<name<<endl;
		}
};
int main()
{
	Student s1;              //without parameter
	Student s2("nik");
	
	s1.printname();
	s2.printname();
	
}


