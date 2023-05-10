//5-accept a single no from user and check the number is positive or negative.

#include<iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"enter num:";
	cin>>a;
	
	if(a>0)
	{
		cout<<"Positive num";
	}
	else if(a==0)
	{
		cout<<"Neutral num";
	}
	else
	{
		cout<<"Negative num";
	}
}
