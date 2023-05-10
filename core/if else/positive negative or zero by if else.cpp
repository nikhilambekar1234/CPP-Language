//1.	Write a C program to check whether a number is negative, positive or zero.

#include<iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"Enter num:";
	cin>>a;
	
	if(a>0)
	{
		cout<<"+ve = "<<a<<endl;
	}
	else if(a<0)
	{
		cout<<"-ve = "<<a<<endl;
	}
	else
	{
		cout<<"entered = "<<a<<endl;
	}
}
