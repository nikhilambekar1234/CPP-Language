//1WAP to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	
	cout<<"Enter three angle of triangle :";
	cin>>a>>b>>c;
	
	sum=a+b+c;
	
	if(sum==180 && a!=0 && b!=0 && c!=0)
	{
		cout<<"valid";
	}
	else
	{
		cout<<"not valid";
	}
	
}
