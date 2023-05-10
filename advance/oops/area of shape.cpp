#include<iostream>
using namespace std;
void area(int r)
{
	cout<<"Area of circle = "<<3.14*r*r<<endl;
}
void area(double s)
{
	cout<<" Area of square = "<<s*s<<endl;
}
void area(int b,int l)
{
	cout<<" Area of rectangle = "<<b*l<<endl;
}
void area(double b,int h)
{
	cout<<" Area of triangle = "<<0.5*b*h<<endl;
}

int main()
{
	area(10);
	area(2.5);
	area(4,8);
	area(2.5,8);
	
}
