//3. Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
// by creating a class named 'Triangle' with a function to print the area and perimeter.

#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
	public:
		void area(int a,int b,int c);
		void perimeter(int a,int b,int c);
		
};
void Triangle::area(int a,int b,int c)
{
	float s=((a+b+c)/2.0);
	float A=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"area of triangle = "<<A<<endl;
}
void Triangle::perimeter(int a,int b,int c)
{
	cout<<" perimeter of triangle = "<<a+b+c<<endl;
}
int main()
{
	Triangle t;
	int s1=3,s2=4,s3=5;
	
	t.area(s1,s2,s3);
	t.perimeter(s1,s2,s3);
}
