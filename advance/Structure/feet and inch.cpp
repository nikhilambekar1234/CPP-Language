//Write a program to add two distances in inch-feet using structure.
//The values of the distances is to be taken from the user

#include<iostream>
using namespace std;
struct distance
{
	int feet;
	int inch;
};
int main()
{
	struct distance d1,d2,d3;
	
	cout<<"enter first distance:\n";
	cin>>d1.feet>>d1.inch;
	cout<<"enter second distance:\n";
	cin>>d2.feet>>d2.inch;
	
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	
	kdn : 
	if(d3.inch>=12)
	{
		d3.feet++;
		d3.inch-=12;
		if(d3.inch>=12)
		{
			goto kdn;
		}
	}
	cout<<"feet = "<<d3.feet<<endl;
	cout<<"inch = "<<d3.inch<<endl;
}

