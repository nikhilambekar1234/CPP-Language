/*8.Create a class 'Student' with three data members which are name, age and address. The constructor of
 the class assigns default values to name as "unknown", age as '0' and address as "not available". It has two
functions with the same name 'setInfo'. First function has two parameters for name and age and assigns the same
whereas the second function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 10 students.
Hint - Use array of objects */

#include<iostream>
using namespace std;
class Student
{
	string name;
	int age;
	string address;
	public:
		Student()
		{
			name="Unknown";
			age=0;
			address="not available";
		}
    	void setInfo(string a,int b)
		{
			name=a;
			age=b;
			
		}
		void setInfo(string a,int b, string c)
		{
			name=a;
			age=b;
			address=c;
		}
		void getInfo(string a,int b, string c)
		{
			cout<<" name = "<<name<<" age = "<<age<<" address = "<<address<<endl;
		}
		void getInfo(string a,int b)
		{
			
			cout<<" name = "<<name<<" age = "<<age<<endl;
		}
		
};
int main()
{
	int i,n=5,b;
	string a,c;
	Student s[n];
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" enter name age address\n";
		cin>>a>>b>>c;
		s[i].setInfo(a,b,c);
	}
	for(i=0;i<n;i++)
	{
		cout<<i+1<<endl;
		s[i].getInfo(a,b,c);
	}
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" enter name age \n";
		cin>>a>>b;
		s[i].setInfo(a,b);
	}
	for(i=0;i<n;i++)
	{
		cout<<i+1<<endl;
		s[i].getInfo(a,b);
	}
	
}

