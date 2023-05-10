/*2.Create a class named 'Rectangle' with two data members-length and breadth and a function to calculate the area
 which is 'length*breadth'. The class has three constructors which are :
1 - having no parameter - values of both length and breadth are assigned zero.
2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas. */

#include<iostream>
using namespace std;
class Rectangle
{
	int length;
	int breadth;
	
	public:
		Rectangle()
		{
			length=0;
			breadth=0;
		}
		Rectangle(int m,int n)
		{
			length=m;
			breadth=n;
		}
		Rectangle(int k)
		{
			length=k;
			breadth=k;
		}
		void area()
		{
			cout<<"Area of rectangle = "<<length*breadth<<endl;
		}
};
int main()
{
	Rectangle r1;
	Rectangle r2(7,4);
	Rectangle r3(9);
	
	r1.area();
	r2.area();
	r3.area();
}

