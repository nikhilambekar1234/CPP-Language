//7. Write a program to print the area of a rectangle by creating a class named 'Area' 
//taking the values of its length and breadth as parameters of its constructor
// and having a function named 'returnArea' which returns the area of the rectangle.
// Length and breadth of the rectangle are entered through keyboard

#include<iostream>
using namespace std;
class Area
{
	int l,b;
	
	public:
	/*	Area(int m, int n)
		{
		    l=m;
		    b=n;
		}   */
		Area()
		{
			cout<<"enter length and breadth\n";
			cin>>l>>b;
		}
		int returnArea()
		{
			return l*b;
		}
};
int main()
{
	int l,b;
	Area r;
/*	cout<<"enter length and breadth:\n";
	cin>>l>>b;
	Area r(l,b);    */
	cout<<"area of rectangle = "<<r.returnArea();
	
}
