//1.	Write a C program to input month number and print number of days in that month.

//1.	Write a C program to input week number and print week day.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter num:";
	cin>>n;
	
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
	{
		cout<<"31 day";
	}
	else if(n==4||n==6||n==9||n==11)
	{
		cout<<"30 day";
	}
	else if(n==2)
	{
		cout<<"28/29 day";
	}
	else
	{
		cout<<"invalid op";
	}
	
}
