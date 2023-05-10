//1.WAP to input all sides of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter three sides of triangle :";
	cin>>a>>b>>c;
	
	if(a+b<=c || a+c<=b||b+c<=a)
	{
		cout<<"not valid";
	}
	else
	{
		cout<<"valid";
	}
}
