//1.	Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter num:";
	cin>>n;
	
	if(n%5==0 && n%11==0)
	{
		cout<<"divisible by 5 & 11";
	}
	else if(n%5==0)
	{
		cout<<"divisible by 5";
	}
	else if(n%11==0)
	{
		cout<<"divisible by 11";
	}
	else
	{
		cout<<"not divisible by 5 & 11";
	}
}
