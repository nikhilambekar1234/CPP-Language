//24. Write a C++ program to calculate volume of cube, cylinder and rectangle
// using function overloading. 
#include<iostream>
using namespace std;
class Volume
{
	public:
		print(int s)
		{
			cout<<" Volume of cube = "<<s*s*s<<endl;
		}
		print(int r,int h)
		{
			cout<<" Volume of cylinder = "<<3.14*r*r*h<<endl;
		}
		print(int l,int b,int h)
		{
			cout<<" Volume of cuboid = "<<l*b*h;
		}
};
int main()
{
	Volume v;

	v.print(5);
	v.print(10,20);
	v.print(15,10,5);
	
}
