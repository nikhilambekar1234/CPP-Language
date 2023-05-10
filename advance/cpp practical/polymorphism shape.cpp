//38. Write a C++ program to demonstrate polymorphism by calculating area of rectangle
// and triangle using a shape class. 
#include<iostream>
using namespace std;
class Shape
{
	public:
		print(int l,int b)
		{
			cout<<"Area of rectangle = "<<l*b<<endl;
		}
		print(double h,int b)
		{
			cout<<"Area of triangle = "<<0.5*h*b<<endl;
		}
};
int main()
{
	Shape area;
	area.print(4,8);
	area.print(2.5,10);
}
