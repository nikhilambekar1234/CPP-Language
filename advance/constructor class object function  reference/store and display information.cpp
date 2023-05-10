//store and display information
//default and parametarised constructor
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
		id=0;//due to garbage value
		name="NULL";//due to garbage value
		marks=0.0;//due to garbage value
	}
	student(int i,string n,float m)
	{
		id=i;
		name=n;
		marks=m;
	}
	void getdata()
	{
		cout<<"id ="<<id<<"  name ="<<name<<"  marks ="<<marks<<endl;
	} 
};
int main()
{
	 student s1;
	 student s2(5,"kdn",90.8);
	
     s1.getdata();
     s2.getdata();
}
