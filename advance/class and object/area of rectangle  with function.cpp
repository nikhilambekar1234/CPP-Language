//6. Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
// First function named as 'setDim' takes the length and breadth of the rectangle as parameters
// and the second function named as 'getArea' returns the area of the rectangle.
// Length and breadth of the rectangle are entered through keyboard

#include<iostream>
using namespace std;
class Area
{
	int l,b;
	public:
		void setDim()
		{
			cout<<"enter length and breadth of rectangle\n";
	        cin>>l>>b;
		}
		int getarea()
		{
			return l*b;
		}
};
int main()
{
	Area r;
	
	r.setDim();
	
	cout<<"Area of rectangle ="<<r.getarea();
	
}
