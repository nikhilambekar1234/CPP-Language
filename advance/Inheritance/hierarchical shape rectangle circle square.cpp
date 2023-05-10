/*5.Create a class named 'Shape' with a function to print "This is a shape". Then create two other classes
 named 'Rectangle' and 'Circle' inheriting the Shape class, both having a function to print "This is rectangular shape" 
 and "This is circular shape" respectively. Create a subclass 'Square' of 'Rectangle' having a function 
 to print "Square is a rectangle". Now call the function of the 'Shape' and the 'Rectangle' class
  by the object of the 'Square' class.*/
  
#include<iostream>
using namespace std;
class Shape
{
	public:
		void shape()
		{
			cout<<"This is a shape"<<endl;
		}
};
class Rectangle:public Shape
{
	public:
		void rect()
		{
			cout<<"This is a rectangle shape"<<endl;
		}
};
class Circle:public Shape
{
	public:
		void circle()
		{
			cout<<"This is a circular shape"<<endl;
		}
};
class Square:public Rectangle
{
	public:
		void sqr()
		{
			cout<<"Square is a rectangle"<<endl;
		}
};
int main()
{
	Square s;
	s.sqr();
	s.shape();
	s.rect();
	
}
