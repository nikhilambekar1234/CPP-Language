//1.	Write a C program to input week number and print week day.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter num:";
	cin>>n;
	
	if(n==1)
	{
		cout<<"sunday";
	}
	else if(n==2)
	{
		cout<<"monday";
	}
	else if(n==3)
	{
		cout<<"tuesday";
	}
	else if(n==4)
	{
		cout<<"wendsday";
	}
	else if(n==5)
	{
		cout<<"thirsday";
	}
	else if(n==6)
	{
		cout<<"friday";
	}
	else if(n==7)
	{
		cout<<"saturday";
	}
	else
	{
		cout<<"invalid op";
	}
	
}
