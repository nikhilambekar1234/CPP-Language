//in struct fun call for multiple student
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
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		s[i].setdata();
	}
	cout<<"your data\n";
	for(i=0;i<3;i++)
	{
		s[i].getdata();
	}
}
