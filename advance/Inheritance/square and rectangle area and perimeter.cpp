/*3.Create a class named 'Rectangle' with two data members 'length' and 'breadth' and two functions to print
 the area and perimeter of the rectangle respectively. Its constructor having parameters for length and breadth
is used to initialize the length and breadth of the rectangle. Let class 'Square' inherit the 'Rectangle' class
with its constructor having a parameter for its side (suppose s) calling the constructor of its parent class. 
Print the area and perimeter of a rectangle and a square. */

#include<iostream>
using namespace std;
class Rectangle
{
	int l,b;
	public:
		Rectangle(int m,int n)
		{
			l=m;
			b=n;
		}
		void area()
		{
			cout<<"Area  = "<<l*b<<endl;
		}
		void perimeter()
		{
			cout<<"Perimeter  = "<<2*(l+b)<<endl;
		}
};
class Square:public Rectangle
{
	public:
	Square(int side):Rectangle(side,side)
	{
		
	}
};
int main()
{
	Rectangle r(4,8);
	Square s(5);
	
	r.area();
	r.perimeter();
	
	s.area();
	s.perimeter();
}
