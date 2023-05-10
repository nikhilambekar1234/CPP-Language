//struct with fun
 #include<iostream>
using namespace std;
struct student
{
	int id;
	char name[20];
	float marks;
	
	void setdata()
	{
		cout<<"enter data\n";
		cin>>id>>name>>marks;
	}
	void getdata()
	{
		cout<<"id ="<<id<<"  name ="<<name<<"  marks ="<<marks<<endl;
	} 
};
int main()
{
	struct student s1,s2;
	
     s1.setdata();
     s2.setdata();
     s1.getdata();
     s2.getdata();
}
