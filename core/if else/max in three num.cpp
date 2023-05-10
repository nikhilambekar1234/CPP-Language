//1.	Write a C program to find maximum between three numbers.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter three num:";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
		cout<<"max = "<<a<<endl;
	}
	else if(b>c && b>a)
	{
		cout<<"max = "<<b<<endl;
	}
	else
	{
		cout<<"max = "<<c<<endl;
	}
}
