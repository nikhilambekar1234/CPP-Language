//WAP to check whether the triangle is equilateral, isosceles or scalene triangle.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	
	cout<<"Enter three angle of triangle :";
	cin>>a>>b>>c;
	
	if(a==b && b==c)
	{
		cout<<"equilateral";
	}
	else if(a==b||b==c||a==c)
	{
		cout<<"isoscelen";
	}
	else
	{
		cout<<"scelen";
	}
}
