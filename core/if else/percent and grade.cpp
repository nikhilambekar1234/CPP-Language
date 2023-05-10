//WAP to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
// Calculate percentage and grade according to following:
/*Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	float percent,sum;
	
	cout<<"Enter marks of 5 sub each sub having 100:";
	cin>>a>>b>>c>>d>>e;
	
	sum=a+b+c+d+e;
	percent=(sum/500)*100;
	cout<<"sum = "<<sum<<endl;
	cout<<"percent = "<<percent<<endl;
	
	
	if(percent>=90)
	{
		cout<<"grade A ";
	}
	else if(percent>=80)
	{
		cout<<"grade B";
	}
	else if(percent>=70)
	{
		cout<<"grade C";
	}
	else if(percent>=60)
	{
		cout<<"grade D";
	}
	else if(percent>=40)
	{
		cout<<"grade E";
	}
	else if(percent<40)
	{
		cout<<"grade F";
	}
}

