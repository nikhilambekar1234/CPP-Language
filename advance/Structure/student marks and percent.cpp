// Enter the marks of 4 students in Chemistry, Mathematics and Physics (each out of 100)
// using a structure named Marks having elements roll no., name, chem_marks, maths_marks
// and phy_marks and then display the percentage of each student.

#include<iostream>
using namespace std;
struct marks
{
	int roll;
	char name[10];
	float che,math,phy;
};
int main()
{
	int i;
	float percent,sum=0;
	struct marks s[4];
	
	cout<<"enter data:\n";
	for(i=0;i<4;i++)
	{
		cin>>s[i].roll>>s[i].name>>s[i].che>>s[i].math>>s[i].phy;
	}
	cout<<"your data:\n";
	cout<<"roll  "<<"name  "<<"che    "<<"math    "<<"phy    "<<"percent     "<<endl;
	for(i=0;i<4;i++)
	{
		sum=s[i].che+s[i].math+s[i].phy;
		percent=(sum/300)*100;
		cout<<s[i].roll<<"    "<<s[i].name<<"    "<<s[i].che<<"    "<<s[i].math<<"    "<<s[i].phy<<"    "<<percent<<endl;
	}
	
}
