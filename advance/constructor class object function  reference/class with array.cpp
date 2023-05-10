#include<iostream>
using namespace std;
class student
{
	public :
		
	int id;
	char name[20];
	float marks;
};
int main()
{
	int i;
    student s[2];
	
	for(i=0;i<2;i++)
	{
		cout<<"enter id name marks of student\n";
    	cin>>s[i].id>>s[i].name>>s[i].marks;
	}
	cout<<"your data\n";
	for(i=0;i<2;i++)
	{
		 cout<<"id ="<<s[i].id<<"  "<<"name ="<<s[i].name<<"  "<<"marks ="<<s[i].marks<<endl;
	}
	
	

	
}
