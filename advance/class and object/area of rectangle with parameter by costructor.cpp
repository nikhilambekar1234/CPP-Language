//5. Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a 
//class named 'Rectangle' with a function named 'Area' which returns the area.
// Length and breadth are passed as parameters to its constructor.
#include<iostream>
using namespace std;
class Rectangle
{
	int s1,s2;
	public:
		Rectangle(int m,int n) //parametarised costructor
		{
			s1=m;
			s2=n;
			
		}
	    int area()
		{
			int A;
			A=(s1*s2);
			return A;
		}
		
};
int main()
{
	int B;
	Rectangle a1(4,5);//call parametarised constructor
	Rectangle a2(5,8);//call parametarised constructor
	
	
	B=a1.area();
	cout<<"area of rectangle = "<<B<<endl;
	B=a2.area();
	cout<<"area of rectangle = "<<B<<endl;
}
