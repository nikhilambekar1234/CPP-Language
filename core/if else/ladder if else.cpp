//2-accept no from user and print the number in string format or word format. 
//if the number in between 1 to 5 use ladder if else

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	if(n==1)
	{
		cout<<"one";
	}
	else if(n==2)
	{
		cout<<"two";
	}
	else if(n==3)
	{
		cout<<"three";
	}
	else if(n==4)
	{
		cout<<"four";
	}
	else if(n==5)
	{
		cout<<"five";
	}
	else
	{
		cout<<"invalid";
	}
}
