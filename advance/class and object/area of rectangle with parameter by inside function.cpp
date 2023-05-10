//5. Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a 
//class named 'Rectangle' with a function named 'Area' which returns the area.
// Length and breadth are passed as parameters to its -------FUN.
//[BY INSIDE FUNCTION/METHOD]Length and breadth are passed as parameters to its FUNCTION.
#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int area(int l,int b)
		{
			float A;
			A=(l*b);
			return A;
		}
		
};
int main()
{
	Rectangle a1,a2;
	
		cout<<"area of rectangle = "<<a1.area(4,5)<<endl;
		cout<<"area of rectangle = "<<a2.area(5,8);
}
