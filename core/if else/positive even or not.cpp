//12-accept no from user and check the no is positive even no or not.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	if(n>0 && n%2==0)
	{
		cout<<"positive even num";
	}
	else
	{
		cout<<"not";
	}
}
