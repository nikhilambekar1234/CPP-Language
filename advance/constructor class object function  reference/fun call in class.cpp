// function call in class
 #include<iostream>
using namespace std;
class student
{
	public :
	int id;
	char name[20];
	float marks;
	
	void setdata()
	{
		cout<<"enter id\n";
		cin>>id;
		cout<<"enter name\n";
		cin>>name;
		cout<<"enter marks\n";
		cin>>marks;
	}
	void getdata()
	{
		cout<<"id ="<<id<<"  name ="<<name<<"  marks ="<<marks<<endl;
	}
};
int main()
{
	student s1,s2;
	
     s1.setdata();
     s2.setdata();
     s1.getdata();
     s2.getdata();
}
