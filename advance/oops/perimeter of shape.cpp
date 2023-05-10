#include<iostream>
using namespace std;
void perimeter(int r)
{
	cout<<" perimeter of circle = "<<2*3.14*r<<endl;
}
void perimeter(double s)
{
	cout<<" perimeter of square = "<<4*s<<endl;
}
void perimeter(int b,int l)
{
	cout<<" perimeter of rectangle = "<<2*(b+l)<<endl;
}
void perimeter(int a,int b,int c)
{
	cout<<" perimeter of triangle = "<<a+b+c<<endl;
}

int main()
{
	perimeter(10);
	perimeter(2.5);
	perimeter(4,8);
	perimeter(2,4,8);
	
}
